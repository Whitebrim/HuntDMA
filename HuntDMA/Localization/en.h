#pragma once
#include "LocalizationData.h"

namespace Localizations {
    inline LocalizationData GetLocalization_EN() {
        return {
            .version = LocalizationData::LOCALIZATION_VERSION, // DO NOT FORGET TO INCREMENT THIS (in the LocalizationData.h) IF MADE ANY CHANGES
            .translations = {
                {"entity", {
                    {"Unknown", "Unknown"},

                    {"LocalPlayer", "Me, Myself and I"}, // Not used
                    {"EnemyPlayer", "Hunter"},
                    {"FriendlyPlayer", "Teammate"},
                    {"DeadPlayer", "Dead"},

                    {"Butcher", "Butcher"},
                    {"Assassin", "Assassin"},
                    {"Scrapbeak", "Scrapbeak"},
                    {"Spider", "Spider"},
                    {"Rotjaw", "Rotjaw"},
                    {"Hellborn", "Hellborn"},

                    {"CashRegister", "Cash Register"},
                    {"GoldCashRegister", "GOLD CASH REGISTER (STONKS)"},

                    {"Pouch", "Pouch"},
                    {"Poster", "Poster"},
                    {"WorkbenchUpgrade", "Blueprint"},
                    {"WorkbenchOil", "Gun Oil"},
                    {"Trait", "Trait"},
                    {"Sealed Trait", "Sealed Trait"},

                    {"ResupplyStation", "Resupply"},
                    {"ExtractionPoint", "Extraction"},
                    {"Clue", "Clue"},

                    {"BearTrap", "Bear Trap"},
                    {"TripMine", "Trip Mine"},
                    {"DarksightDynamite", "C4"},

                    {"OilBarrel", "Oil Barrel"},
                    {"GunpowderBarrel", "Barrel"},
                    {"BioBarrel", "Bio Barrel"},

                    {"AmmoSwapBox", "AmmoSwap Box"},
                    {"SpitzerBullets", "Spitzer Bullets"},
                    {"PoisonBullets", "Poison Bullets"},
                    {"HighVelocityBullets", "High Velocity Bullets"},
                    {"IncendiaryBullets", "Incendiary Bullets"},
                    {"DumDumBullets", "Dum Dum Bullets"},
                    {"ExplosiveBullets", "Explosive Bullets"},
                    {"FMJBullets", "FMJ Bullets"},
                    {"PoisonBolts", "Poison Bolts"},
                    {"ExplosiveBolts", "Explosive Bolts"},
                    {"IncendiaryShells", "Incendiary Shells"},
                    {"PennyShotShells", "Penny Shot Shells"},
                    {"FlechetteShells", "Flechette Shells"},
                    {"SlugShells", "Slug Shells"},

                    {"SupplyBox", "Supply Box"},
                    {"AmmoCrate", "Ammo Crate"},
                    {"SpecialAmmoCrate", "Special Ammo Crate"},
                    {"CompactAmmoPackage", "Compact Ammo Package"},
                    {"MediumAmmoPackage", "Medium Ammo Package"},
                    {"LongAmmoPackage", "Long Ammo Package"},
                    {"ShotgunAmmoPackage", "Shotgun Ammo Package"},
                    {"Medkit", "Medkit"},

                    {"Event", "Event"},
                }},
                {"menu", {
                    {"window.name", "Hunt DMA"},
                    {"tabs.PlayerESP", "Player ESP"},
                    {"tabs.BossesESP", "Bosses ESP"},
                    {"tabs.SupplyESP", "Supply ESP"},
                    {"tabs.BBESP", "BB ESP"},
                    {"tabs.TrapESP", "Trap ESP"},
                    {"tabs.POIESP", "POI ESP"},
                    {"tabs.TraitESP", "Trait ESP"},
                    {"tabs.Overlay", "Overlay"},
                    {"tabs.Aimbot", "Aimbot"},
                    {"tabs.Settings", "Settings"},
                    {"hotkey.SelectKey", "Select Key"},
                    {"hotkey.Instructions", "Press any key or click to cancel"},
                }},
                {"trait", {
                    {"adrenaline", "Adrenaline (1)"},
                    {"ambidextrous", "Ambidextrous (3)"},
                    {"assailant", "Assailant (1)"},
                    {"beastface", "Beastface (4)"},
                    {"bladeseer", "Blade Seer (1)"},
                    {"bloodless", "Bloodless (3)"},
                    {"boltthrower", "Bolt Thrower (3)"},
                    {"bulletgrubber", "Bulletgrubber (4)"},
                    {"bulwark", "Bulwark (2)"},
                    {"conduit", "Conduit (5)"},
                    {"dauntless", "Dauntless (1)"},
                    {"decoysupply", "Decoy Supply (1)"},
                    {"determination", "Determination (4)"},
                    {"doctor", "Doctor (9)"},
                    {"fanning", "Fanning (8)"},
                    {"fastfingers", "Fast Fingers (6)"},
                    {"frontiersman", "Frontiersman (5)"},
                    {"gatorlegs", "Gator Legs (3)"},
                    {"ghoul", "Ghoul (3)"},
                    {"greyhound", "Greyhound (5)"},
                    {"hornskin", "Hornskin (3)"},
                    {"hundredhands", "Hundred Hands (2)"},
                    {"ironeye", "Iron Eye (3)"},
                    {"kiteskin", "Kiteskin (1)"},
                    {"levering", "Levering (7)"},
                    {"lightfoot", "Lightfoot (5)"},
                    {"magpie", "Magpie (1)"},
                    {"martialist", "Martialist (2)"},
                    {"mithridatist", "Mithridatist (3)"},
                    {"packmule", "Packmule (4)"},
                    {"physician", "Physician (5)"},
                    {"pitcher", "Pitcher (4)"},
                    {"poacher", "Poacher (1)"},
                    {"poisonsense", "Poison Sense (3)"},
                    {"quartermaster", "Quartermaster (6)"},
                    {"resilience", "Resilience (3)"},
                    {"salveskin", "Salveskin (3)"},
                    {"scopesmith", "Scopesmith (2)"},
                    {"serpent", "Serpent (4)"},
                    {"silentkiller", "Silent Killer (3)"},
                    {"steadyaim", "Steady Aim (2)"},
                    {"surefoot", "Surefoot (4)"},
                    {"vigilant", "Vigilant (1)"},
                    {"vigor", "Vigor (3)"},
                    {"vulture", "Vulture (2)"},
                    {"whispersmith", "Whispersmith (1)"},
                    {"witness", "Witness (5)"},

                    {"berserker", "Berserker (!)"},
                    {"deathcheat", "Death Cheat (!)"},
                    {"necromancer", "Necromancer (4)"},
                    {"rampage", "Rampage (!)"},
                    {"relentless", "Relentless (!)"},
                    {"remedy", "Remedy (!)"},
                    {"shadow", "Shadow (!)"},
                    {"shadowleap", "Shadow Leap (!)"},
                }}
            }
        };
    }
}