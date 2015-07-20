/*
 * Copyright (C) 2011 TrintiyCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DB2SFRM_H
#define TRINITY_DB2SFRM_H

char const PathNodeEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_END
};

char const LocationEntryfmt[] =
{
    FT_INDEX,
    FT_FLOAT,
    FT_FLOAT,
    FT_FLOAT,
    FT_FLOAT,
    FT_FLOAT,
    FT_FLOAT,
    FT_END
};

const char CurrencyTypesfmt[] = "nisssiiiiiis";
char const CurvePointEntryfmt[] = "niiff";
const char GroupFinderActivityfmt[] = "niiiiiiiiiiiiss";
const char GroupFinderCategoryfmt[] = "nsii";
const char Itemfmt[] = "niiiiiiii";
const char ItemBonusfmt[] = "diiiii";
const char ItemBonusTreeNodefmt[] = "niiii";
const char ItemXBonusTreefmt[] = "nii";
const char ItemCurrencyCostfmt[] = "in";
const char ItemSparsefmt[] = "niiiiffiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffffffiiifisssssiiiiiiiiiiiiiiiiiiifiiifiii";
const char ItemEffectFmt[] = "niiiiiiiii";
const char HeirloomFmt[] = "nissiiiiiiii";
const char PvpItemfmt[] = "ini";
const char ItemModifiedAppearanceFmt[] = "niiiii";
const char ItemAppearanceFmt[] = "nii";
const char ItemExtendedCostEntryfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char SpellReagentsEntryfmt[] = "diiiiiiiiiiiiiiii";
const char SpellReagentsCurrencyfmt[] = "xnii";
const char ItemUpgradeEntryfmt[] = "niiiii";
const char RulesetItemUpgradeEntryfmt[] = "niii";
const char SceneScriptEntryfmt[] = "nssii";
const char SceneScriptPackageEntryfmt[] = "ns";
const char TaxiNodesEntryfmt[] = "nifffsiiiiiff";
const char TaxiPathEntryfmt[] = "niii";
const char TaxiPathNodeEntryfmt[] = "niiifffiiii";
const char SpellRuneCostfmt[] = "niiiii";
const char SpellCastingRequirementsEntryfmt[] = "niiiiii";
const char SpellAuraRestrictionsEntryfmt[] = "niiiiiiii";
const char AreaPOIEntryfmt[] = "niiiiiiffssiiii";
const char Holidaysfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisii";
const char OverrideSpellDatafmt[] = "niiiiiiiiiiii";
const char SpellEffectGroupSizefmt[] = "inf";
const char SpellMiscEntryfmt[] = "niiiiiiiiiiiiiiiiifiiif";
const char SpellPowerEntryfmt[] = "niiiiiiiiiffif";
const char SpellTotemsEntryfmt[] = "niiii";
const char SpellClassOptionsEntryfmt[] = "niiiiii";
const char SpellXSpellVisualfmt[] = "niiixfxx";
const char SoundEntriesfmt[] = "nisiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiififfiifffffii";
const char MapChallengeModeEntryfmt[] = "niiiiiiiii";
const char QuestPackageItemEntryfmt[] = "niiii";
const char MountEntryfmt[] = "niiisssiii";
const char PlayerConditionEntryfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiii";
const char VignetteEntryfmt[] = "nsiiff";
const char SpecializationSpellsfmt[] = "nixiix";
const char MailTemplateEntryfmt[]= "ns";

const char GlyphRequiredSpecfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_END
};

//////////////////////////////////////////////////////////////////////////
/// Area DB2
//////////////////////////////////////////////////////////////////////////

const char AreaGroupEntryfmt[] =
{
    FT_INDEX,
};

const char AreaGroupMemberEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_END
};

//////////////////////////////////////////////////////////////////////////
/// Garrison DB2
//////////////////////////////////////////////////////////////////////////
const char GarrSiteLevelEntryfmt[] = "niiiiffiiii";
const char GarrSiteLevelPlotInstEntryfmt[] = "niiffi";
const char GarrPlotInstanceEntryfmt[] = "nis";
const char GarrPlotEntryfmt[] = "niiisiiii";
const char GarrPlotUICategoryEntryfmt[] = "nsi";
const char GarrMissionEntryfmt[] = "niiiiiiixixsssiiiixiiixxx";
const char GarrMissionRewardEntryfmt[] = "niiiiiiiiix";
const char GarrMissionXEncouterEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_END
};

const char GarrBuildingEntryfmt[] = "niiiiissssiiiiiiiiiiiiii";
const char GarrPlotBuildingEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_END
};

const char GarrFollowerEntryfmt[] = "nxiiiiiiiiiiiiiissiiiixx";
const char GarrAbilityEntryfmt[] = "nissiiix";
const char GarrAbilityEffectEntryfmt[] = "niiiiiffiiix";
const char GarrFollowerXAbilityEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_END
};

const char GarrBuildingPlotInstEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_END
};

const char GarrMechanicTypeEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_STRING,
    FT_STRING,
    FT_INT,
    FT_END
};

const char GarrMechanicEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_FLOAT,
    FT_END
};

const char GarrEncouterXMechanicEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_END
};

const char GarrFollowerLevelXPEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_NA,
    FT_NA,
    FT_END
};

const char GarrSpecializationEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_FLOAT,
    FT_INT,
    FT_STRING,
    FT_STRING,
    FT_END
};

const char CharShipmentEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_NA,
    FT_END
};

const char CharShipmentContainerEntryfmt[] =
{
    FT_INDEX,
    FT_INT,
    FT_INT,
    FT_STRING,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_STRING,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_INT,
    FT_END
};

const char BattlePetAbilityfmt[] = "niiiiiss";
const char BattlePetSpeciesEntryfmt[] = "iniiiiiss";
const char BattlePetAbilityEffectfmt[] = "niiiiiiiiiii";
const char BattlePetAbilityTurnfmt[] = "niiiii";
const char BattlePetAbilityStatefmt[] = "niii";
const char BattlePetStatefmt[] = "nisi";
const char BattlePetEffectPropertiesfmt[] = "nissssssiiiiii";
const char BattlePetBreedQualityfmt[] = "nif";
const char BattlePetBreedStatefmt[] = "niii";
const char BattlePetSpeciesfmt[] = "niiiiiiss";
const char BattlePetSpeciesStatefmt[] = "niii";
const char BattlePetSpeciesXAbilityfmt[] = "niiii";

const char AuctionHouseEntryfmt[]             = "niiix";
const char BarberShopStyleEntryfmt[]          = "nixxxiii";
const char CharStartOutfitEntryfmt[]          = "dbbbbiiiiiiiiiiiiiiiiiiiiiiiixx";
const char ChrClassesXPowerTypesfmt[]         = "nii";
const char CinematicSequencesEntryfmt[]       = "nxixxxxxxx";
const char CreatureDisplayInfofmt[]           = "nixifxxxxxxxxxxxxxxxxx";
const char CreatureTypefmt[]                  = "nxx";
const char DestructibleModelDatafmt[]         = "ixxixxxixxxixxxixxxxxxxx";
const char DurabilityQualityfmt[]             = "nf";
const char GlyphSlotfmt[]                     = "nii";
const char GuildPerkSpellsfmt[]               = "dii";
const char ImportPriceArmorfmt[]              = "nffff";
const char ImportPriceQualityfmt[]            = "nf";
const char ImportPriceShieldfmt[]             = "nf";
const char ImportPriceWeaponfmt[]             = "nf";
const char ItemPriceBasefmt[]                 = "diff";
const char ItemClassfmt[]                     = "difx";
const char ItemDisenchantLootfmt[]            = "niiiiii";
const char ItemLimitCategoryEntryfmt[]        = "nxii";
const char ItemRandomPropertiesfmt[]          = "nxiiiiis";
const char ItemRandomSuffixfmt[]              = "nsxiiiiiiiiii";
const char ItemSpecEntryfmt[]                 = "niiiiii";
const char ItemSpecOverrideEntryfmt[]         = "nii";
const char MountCapabilityfmt[]               = "niiiiiii";
const char MountTypefmt[]                     = "n";
const char MountTypeXCapabilityfmt[]          = "niii";
const char NameGenfmt[]                       = "dsii";
const char QuestSortEntryfmt[]                = "nx";
char const QuestV2fmt[]                       = "ni";
const char QuestXPfmt[]                       = "niiiiiiiiii";
const char ResearchBranchfmt[]                = "ixxixi";
const char ResearchProjectfmt[]               = "nxxiiixxi";
const char ResearchSitefmt[]                  = "niixx";
const char ScalingStatDistributionfmt[]       = "niii";
const char ScenarioEntryfmt[]                 = "nsi";
const char SpellCastTimefmt[]                 = "nixx";
const char SpellDurationfmt[]                 = "niii";
const char SpellItemEnchantmentConditionfmt[] = "nbbbbbxxxxxbbbbbbbbbbiiiiixxxxx";
const char SpellRadiusfmt[]                   = "nfxxf";
const char SpellRangefmt[]                    = "nffffixx";
const char TotemCategoryEntryfmt[]            = "nxii";
char const TransportAnimationfmt[]            = "diifffx";
char const TransportRotationfmt[]             = "diiffff";
const char WorldMapOverlayEntryfmt[]          = "nxiiiixxxxxxxxxx";
const char SpellProcsPerMinuteEntryfmt[]      = "nfx";

#endif
