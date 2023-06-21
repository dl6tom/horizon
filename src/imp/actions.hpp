#pragma once
#include "action.hpp"

namespace horizon {
enum class ActionID {
    NONE,
    TOOL,
    UNDO,
    REDO,
    COPY,
    PLACE_PART,
    LAYER_UP,
    LAYER_DOWN,
    LAYER_TOP,
    LAYER_BOTTOM,
    LAYER_INNER1,
    LAYER_INNER2,
    LAYER_INNER3,
    LAYER_INNER4,
    LAYER_INNER5,
    LAYER_INNER6,
    LAYER_INNER7,
    LAYER_INNER8,
    SELECTION_FILTER,
    SAVE,
    VIEW_3D,
    RULES,
    RULES_RUN_CHECKS,
    RULES_APPLY,
    PREFERENCES,
    POPOVER,
    HELP,
    VIEW_ALL,
    SELECTION_TOOL_BOX,
    SELECTION_TOOL_LASSO,
    SELECTION_TOOL_PAINT,
    SELECTION_QUALIFIER_AUTO,
    SELECTION_QUALIFIER_INCLUDE_ORIGIN,
    SELECTION_QUALIFIER_TOUCH_BOX,
    SELECTION_QUALIFIER_INCLUDE_BOX,
    SELECTION_MODIFIER_ACTION_TOGGLE,
    SELECTION_MODIFIER_ACTION_ADD,
    SELECTION_MODIFIER_ACTION_REMOVE,
    SELECTION_STICKY,
    UNDO_SELECTION,
    REDO_SELECTION,
    TO_BOARD,
    MOVE_TO_OTHER_SHEET,
    SHOW_IN_BROWSER,
    TUNING,
    TUNING_ADD_TRACKS,
    TUNING_ADD_TRACKS_ALL,
    HIGHLIGHT_NET,
    RELOAD_NETLIST,
    SAVE_RELOAD_NETLIST,
    BOM_EXPORT_WINDOW,
    EXPORT_BOM,
    RELOAD_POOL,
    FLIP_VIEW,
    VIEW_TOP,
    VIEW_BOTTOM,
    EDIT_PADSTACK,
    EDIT_UNIT,
    HIGHLIGHT_GROUP,
    HIGHLIGHT_TAG,
    SELECT_GROUP,
    SELECT_TAG,
    SEARCH,
    SEARCH_NEXT,
    SEARCH_PREVIOUS,
    GO_TO_BOARD,
    GO_TO_SCHEMATIC,
    SHOW_IN_POOL_MANAGER,
    SHOW_IN_PROJECT_POOL_MANAGER,
    SELECT_ALL,
    PDF_EXPORT_WINDOW,
    EXPORT_PDF,
    BACKANNOTATE_CONNECTION_LINES,
    SELECT_MORE,
    SELECT_MORE_NO_VIA,
    STEP_EXPORT_WINDOW,
    EXPORT_STEP,
    PNP_EXPORT_WINDOW,
    EXPORT_PNP,
    RESET_AIRWIRE_FILTER,
    FILTER_AIRWIRES,
    AIRWIRE_FILTER_WINDOW,
    SELECT_POLYGON,
    FAB_OUTPUT_WINDOW,
    GEN_FAB_OUTPUT,
    FOOTPRINT_GENERATOR,
    SET_GRID_ORIGIN,
    DISTRACTION_FREE,
    TOGGLE_SNAP_TO_TARGETS,
    PARTS_WINDOW,
    PAN_UP,
    PAN_DOWN,
    PAN_LEFT,
    PAN_RIGHT,
    ZOOM_IN,
    ZOOM_OUT,
    CLICK_SELECT,
    HIGHLIGHT_NET_CLASS,
    ROTATE_VIEW_LEFT,
    ROTATE_VIEW_RIGHT,
    ROTATE_VIEW_RESET,
    ROTATE_VIEW,
    NEXT_SHEET,
    PREV_SHEET,
    VIEW_3D_PERSP,
    VIEW_3D_ORTHO,
    VIEW_3D_TOGGLE_PERSP_ORTHO,
    VIEW_3D_FRONT,
    VIEW_3D_BACK,
    VIEW_3D_TOP,
    VIEW_3D_BOTTOM,
    VIEW_3D_LEFT,
    VIEW_3D_RIGHT,
    GRIDS_WINDOW,
    SELECT_GRID,
    PUSH_INTO_BLOCK,
    POP_OUT_OF_BLOCK,
    EDIT_BLOCK_SYMBOL,
    GO_TO_BLOCK_SYMBOL,
    GO_TO_PROJECT_MANAGER,
    TOGGLE_JUNCTIONS_AND_HIDDEN_NAMES,
    MSD_TUNING_WINDOW,
    TOGGLE_PICTURES,
    VIEW_ACTUAL_SIZE,
    OPEN_DATASHEET,
    SYMBOL_TEXT_PLACEMENT,
    CYCLE_LAYER_DISPLAY_MODE,
    OPEN_PROJECT,
    CONVERT_TO_PAD,
    ASSIGN_PART,
    TOGGLE_SNAP_TO_PAD_BBOX,
    SELECT_PLANE,
};
}
