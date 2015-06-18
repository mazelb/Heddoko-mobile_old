#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Terrain
struct Terrain_t1022;
// UnityEngine.TerrainData
struct TerrainData_t999;
// UnityEngine.Material
struct Material_t19;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t1023;
// UnityEngine.GameObject
struct GameObject_t49;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TerrainRenderFlags
#include "UnityEngine_UnityEngine_TerrainRenderFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.TreeInstance
#include "UnityEngine_UnityEngine_TreeInstance.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TerrainChangedFlags
#include "UnityEngine_UnityEngine_TerrainChangedFlags.h"

// System.Void UnityEngine.Terrain::.ctor()
extern "C" void Terrain__ctor_m4733 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::get_InstanceObject()
extern "C" IntPtr_t98 Terrain_get_InstanceObject_m4734 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_InstanceObject(System.IntPtr)
extern "C" void Terrain_set_InstanceObject_m4735 (Terrain_t1022 * __this, IntPtr_t98 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDestroy()
extern "C" void Terrain_OnDestroy_m4736 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::MakeSureObjectIsAlive()
extern "C" void Terrain_MakeSureObjectIsAlive_m4737 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Cleanup(System.IntPtr)
extern "C" void Terrain_Cleanup_m4738 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainRenderFlags UnityEngine.Terrain::get_editorRenderFlags()
extern "C" int32_t Terrain_get_editorRenderFlags_m4739 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
extern "C" void Terrain_set_editorRenderFlags_m4740 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::GetEditorRenderFlags(System.IntPtr)
extern "C" int32_t Terrain_GetEditorRenderFlags_m4741 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetEditorRenderFlags(System.IntPtr,System.Int32)
extern "C" void Terrain_SetEditorRenderFlags_m4742 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" TerrainData_t999 * Terrain_get_terrainData_m4743 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
extern "C" void Terrain_set_terrainData_m4744 (Terrain_t1022 * __this, TerrainData_t999 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::Internal_GetTerrainData(System.IntPtr)
extern "C" TerrainData_t999 * Terrain_Internal_GetTerrainData_m4745 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTerrainData(System.IntPtr,UnityEngine.TerrainData)
extern "C" void Terrain_Internal_SetTerrainData_m4746 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, TerrainData_t999 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeDistance()
extern "C" float Terrain_get_treeDistance_m4747 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
extern "C" void Terrain_set_treeDistance_m4748 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeDistance_m4749 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeDistance_m4750 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
extern "C" float Terrain_get_treeBillboardDistance_m4751 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
extern "C" void Terrain_set_treeBillboardDistance_m4752 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeBillboardDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeBillboardDistance_m4753 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeBillboardDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeBillboardDistance_m4754 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
extern "C" float Terrain_get_treeCrossFadeLength_m4755 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
extern "C" void Terrain_set_treeCrossFadeLength_m4756 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeCrossFadeLength(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeCrossFadeLength_m4757 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeCrossFadeLength(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeCrossFadeLength_m4758 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
extern "C" int32_t Terrain_get_treeMaximumFullLODCount_m4759 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
extern "C" void Terrain_set_treeMaximumFullLODCount_m4760 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetTreeMaximumFullLODCount(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetTreeMaximumFullLODCount_m4761 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeMaximumFullLODCount(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetTreeMaximumFullLODCount_m4762 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
extern "C" float Terrain_get_detailObjectDistance_m4763 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
extern "C" void Terrain_set_detailObjectDistance_m4764 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDistance_m4765 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDistance_m4766 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
extern "C" float Terrain_get_detailObjectDensity_m4767 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
extern "C" void Terrain_set_detailObjectDensity_m4768 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDensity(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDensity_m4769 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDensity(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDensity_m4770 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
extern "C" float Terrain_get_heightmapPixelError_m4771 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
extern "C" void Terrain_set_heightmapPixelError_m4772 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetHeightmapPixelError(System.IntPtr)
extern "C" float Terrain_Internal_GetHeightmapPixelError_m4773 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapPixelError(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetHeightmapPixelError_m4774 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_heightmapMaximumLOD()
extern "C" int32_t Terrain_get_heightmapMaximumLOD_m4775 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
extern "C" void Terrain_set_heightmapMaximumLOD_m4776 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetHeightmapMaximumLOD(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetHeightmapMaximumLOD_m4777 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapMaximumLOD(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetHeightmapMaximumLOD_m4778 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_basemapDistance()
extern "C" float Terrain_get_basemapDistance_m4779 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
extern "C" void Terrain_set_basemapDistance_m4780 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetBasemapDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetBasemapDistance_m4781 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetBasemapDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetBasemapDistance_m4782 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_splatmapDistance()
extern "C" float Terrain_get_splatmapDistance_m4783 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_splatmapDistance(System.Single)
extern "C" void Terrain_set_splatmapDistance_m4784 (Terrain_t1022 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapIndex()
extern "C" int32_t Terrain_get_lightmapIndex_m4785 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapIndex(System.Int32)
extern "C" void Terrain_set_lightmapIndex_m4786 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetLightmapIndex(System.Int32)
extern "C" void Terrain_SetLightmapIndex_m4787 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ShiftLightmapIndex(System.Int32)
extern "C" void Terrain_ShiftLightmapIndex_m4788 (Terrain_t1022 * __this, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapIndex(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapIndex_m4789 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapIndex(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapIndex_m4790 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapSize()
extern "C" int32_t Terrain_get_lightmapSize_m4791 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapSize(System.Int32)
extern "C" void Terrain_set_lightmapSize_m4792 (Terrain_t1022 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapSize(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapSize_m4793 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapSize(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapSize_m4794 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_castShadows()
extern "C" bool Terrain_get_castShadows_m4795 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_castShadows(System.Boolean)
extern "C" void Terrain_set_castShadows_m4796 (Terrain_t1022 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCastShadows(System.IntPtr)
extern "C" bool Terrain_Internal_GetCastShadows_m4797 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCastShadows(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCastShadows_m4798 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
extern "C" Material_t19 * Terrain_get_materialTemplate_m4799 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
extern "C" void Terrain_set_materialTemplate_m4800 (Terrain_t1022 * __this, Material_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::Internal_GetMaterialTemplate(System.IntPtr)
extern "C" Material_t19 * Terrain_Internal_GetMaterialTemplate_m4801 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetMaterialTemplate(System.IntPtr,UnityEngine.Material)
extern "C" void Terrain_Internal_SetMaterialTemplate_m4802 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, Material_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_drawTreesAndFoliage()
extern "C" bool Terrain_get_drawTreesAndFoliage_m4803 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
extern "C" void Terrain_set_drawTreesAndFoliage_m4804 (Terrain_t1022 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetDrawTreesAndFoliage(System.IntPtr)
extern "C" bool Terrain_Internal_GetDrawTreesAndFoliage_m4805 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDrawTreesAndFoliage(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetDrawTreesAndFoliage_m4806 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_collectDetailPatches()
extern "C" bool Terrain_get_collectDetailPatches_m4807 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_collectDetailPatches(System.Boolean)
extern "C" void Terrain_set_collectDetailPatches_m4808 (Terrain_t1022 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCollectDetailPatches(System.IntPtr)
extern "C" bool Terrain_Internal_GetCollectDetailPatches_m4809 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCollectDetailPatches(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCollectDetailPatches_m4810 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m4811 (Terrain_t1022 * __this, Vector3_t54  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_SampleHeight(System.IntPtr,UnityEngine.Vector3)
extern "C" float Terrain_Internal_SampleHeight_m4812 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, Vector3_t54  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_Internal_SampleHeight(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_Internal_SampleHeight_m4813 (Object_t * __this /* static, unused */, Terrain_t1022 * ___self, IntPtr_t98 ___terrainInstance, Vector3_t54 * ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ApplyDelayedHeightmapModification()
extern "C" void Terrain_ApplyDelayedHeightmapModification_m4814 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_ApplyDelayedHeightmapModification(System.IntPtr)
extern "C" void Terrain_Internal_ApplyDelayedHeightmapModification_m4815 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::AddTreeInstance(UnityEngine.TreeInstance)
extern "C" void Terrain_AddTreeInstance_m4816 (Terrain_t1022 * __this, TreeInstance_t1019  ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_AddTreeInstance(System.IntPtr,UnityEngine.TreeInstance)
extern "C" void Terrain_Internal_AddTreeInstance_m4817 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, TreeInstance_t1019  ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_AddTreeInstance(UnityEngine.Terrain,System.IntPtr,UnityEngine.TreeInstance&)
extern "C" void Terrain_INTERNAL_CALL_Internal_AddTreeInstance_m4818 (Object_t * __this /* static, unused */, Terrain_t1022 * ___self, IntPtr_t98 ___terrainInstance, TreeInstance_t1019 * ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C" void Terrain_SetNeighbors_m4819 (Terrain_t1022 * __this, Terrain_t1022 * ___left, Terrain_t1022 * ___top, Terrain_t1022 * ___right, Terrain_t1022 * ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetNeighbors(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void Terrain_Internal_SetNeighbors_m4820 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, IntPtr_t98 ___left, IntPtr_t98 ___top, IntPtr_t98 ___right, IntPtr_t98 ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
extern "C" Vector3_t54  Terrain_GetPosition_m4821 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::Internal_GetPosition(System.IntPtr)
extern "C" Vector3_t54  Terrain_Internal_GetPosition_m4822 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Flush()
extern "C" void Terrain_Flush_m4823 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_Flush(System.IntPtr)
extern "C" void Terrain_Internal_Flush_m4824 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::RemoveTrees(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_RemoveTrees_m4825 (Terrain_t1022 * __this, Vector2_t32  ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_RemoveTrees(System.IntPtr,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_Internal_RemoveTrees_m4826 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, Vector2_t32  ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_RemoveTrees(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector2&,System.Single,System.Int32)
extern "C" void Terrain_INTERNAL_CALL_Internal_RemoveTrees_m4827 (Object_t * __this /* static, unused */, Terrain_t1022 * ___self, IntPtr_t98 ___terrainInstance, Vector2_t32 * ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_OnTerrainChanged_m4828 (Terrain_t1022 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnTerrainChanged(System.IntPtr,UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_Internal_OnTerrainChanged_m4829 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::Construct()
extern "C" IntPtr_t98 Terrain_Construct_m4830 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnEnable()
extern "C" void Terrain_OnEnable_m4831 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnEnable(System.IntPtr)
extern "C" void Terrain_Internal_OnEnable_m4832 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDisable()
extern "C" void Terrain_OnDisable_m4833 (Terrain_t1022 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnDisable(System.IntPtr)
extern "C" void Terrain_Internal_OnDisable_m4834 (Terrain_t1022 * __this, IntPtr_t98 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t1022 * Terrain_get_activeTerrain_m4835 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C" TerrainU5BU5D_t1023* Terrain_get_activeTerrains_m4836 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
extern "C" GameObject_t49 * Terrain_CreateTerrainGameObject_m4837 (Object_t * __this /* static, unused */, TerrainData_t999 * ___assignTerrain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ReconnectTerrainData()
extern "C" void Terrain_ReconnectTerrainData_m4838 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
