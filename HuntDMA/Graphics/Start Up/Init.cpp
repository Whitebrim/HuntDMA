#include "pch.h"
#include "Globals.h"
#include "PlayerEsp.h"
#include "OtherEsp.h"
#include "ConfigUtilities.h"
#include "Aimbot.h"
#include "InputManager.h"
#include "Kmbox.h"
#include "Overlay.h"
#include <chrono>
#include "SpectatorAlarm.h"
#include "Init.h"

ID2D1Factory* Factory;
IDWriteFactory* FontFactory;
ID2D1HwndRenderTarget* RenderTarget;
ID2D1SolidColorBrush* Brush;


std::shared_ptr<Environment> EnvironmentInstance;
std::shared_ptr<Camera> CameraInstance;

bool cacheThreadCreated = false;

void InitialiseClasses()
{
	EnvironmentInstance = std::make_shared<Environment>();
	CameraInstance = std::make_shared<Camera>();
}

std::shared_ptr<CheatFunction> Cache = std::make_shared<CheatFunction>(8000, [] {
	if (EnvironmentInstance == nullptr)
		return;
	if (EnvironmentInstance->GetObjectCount() == 0)
		return;
	EnvironmentInstance->CacheEntities();
});

std::shared_ptr<CheatFunction> UpdateCam = std::make_shared<CheatFunction>(1, [] {
	if (EnvironmentInstance == nullptr)
		return;
	if (EnvironmentInstance->GetObjectCount() == 0)
		return;
	auto handle = TargetProcess.CreateScatterHandle();
	CameraInstance->UpdateCamera(handle);
	TargetProcess.ExecuteReadScatter(handle);
	TargetProcess.CloseScatterHandle(handle);
});

std::shared_ptr<CheatFunction> UpdateLocalPlayer = std::make_shared<CheatFunction>(8000, [] {
	if (EnvironmentInstance == nullptr)
		return;
	if (EnvironmentInstance->GetObjectCount() == 0)
		return;
	EnvironmentInstance->UpdateLocalPlayer();
});

void CacheThread()
{
	while (true)
	{
		if (EnvironmentInstance == nullptr || EnvironmentInstance->GetObjectCount() == 0)
			continue;
		UpdateLocalPlayer->Execute();
		Cache->Execute();
	}
}

void InitializeESP()
{
	if (!cacheThreadCreated)
	{
		cacheThreadCreated = true;
		std::thread(CacheThread).detach();
	}
	if (enableAimBot)
	{
		Keyboard::InitKeyboard();
		kmbox::KmboxInitialize("");
	}
}

int FrameRate()
{
	static int fps = 0;
	static int lastfps = 0;
	static auto lasttime = std::chrono::steady_clock::now();

	auto currenttime = std::chrono::steady_clock::now();
	std::chrono::duration<float> elapsed = currenttime - lasttime;
	fps++;

	if (elapsed.count() >= 1.0f)
	{
		lasttime = currenttime;
		lastfps = fps;
		fps = 0;
	}

	return lastfps;
}