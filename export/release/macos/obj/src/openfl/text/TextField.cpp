#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_HTMLParser
#include <openfl/text/_internal/HTMLParser.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d001dbc361c2c159_124_new,"openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",124,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_858_appendText,"openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",858,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_884_getCharBoundaries,"openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",884,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_910_getCharIndexAtPoint,"openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",910,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_960_getFirstCharInParagraph,"openfl.text.TextField","getFirstCharInParagraph",0xe06fd955,"openfl.text.TextField.getFirstCharInParagraph","openfl/text/TextField.hx",960,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1007_getLineIndexAtPoint,"openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",1007,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1039_getLineIndexOfChar,"openfl.text.TextField","getLineIndexOfChar",0xcab049d9,"openfl.text.TextField.getLineIndexOfChar","openfl/text/TextField.hx",1039,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1063_getLineLength,"openfl.text.TextField","getLineLength",0x953e9d8c,"openfl.text.TextField.getLineLength","openfl/text/TextField.hx",1063,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1096_getLineMetrics,"openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",1096,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1127_getLineOffset,"openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",1127,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1153_getLineText,"openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",1153,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1192_getParagraphLength,"openfl.text.TextField","getParagraphLength",0xed64f022,"openfl.text.TextField.getParagraphLength","openfl/text/TextField.hx",1192,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1231_getTextFormat,"openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",1231,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1325_replaceSelectedText,"openfl.text.TextField","replaceSelectedText",0x86221d58,"openfl.text.TextField.replaceSelectedText","openfl/text/TextField.hx",1325,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1346_replaceText,"openfl.text.TextField","replaceText",0x698fcd5d,"openfl.text.TextField.replaceText","openfl/text/TextField.hx",1346,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1363_setSelection,"openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",1363,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1423_setTextFormat,"openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",1423,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1596___allowMouseFocus,"openfl.text.TextField","__allowMouseFocus",0x70182198,"openfl.text.TextField.__allowMouseFocus","openfl/text/TextField.hx",1596,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1601___caretBeginningOfLine,"openfl.text.TextField","__caretBeginningOfLine",0x4c500c69,"openfl.text.TextField.__caretBeginningOfLine","openfl/text/TextField.hx",1601,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1605___caretBeginningOfNextLine,"openfl.text.TextField","__caretBeginningOfNextLine",0x9988917c,"openfl.text.TextField.__caretBeginningOfNextLine","openfl/text/TextField.hx",1605,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1619___caretBeginningOfPreviousLine,"openfl.text.TextField","__caretBeginningOfPreviousLine",0x6f5ad940,"openfl.text.TextField.__caretBeginningOfPreviousLine","openfl/text/TextField.hx",1619,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1638___caretEndOfLine,"openfl.text.TextField","__caretEndOfLine",0xeca90427,"openfl.text.TextField.__caretEndOfLine","openfl/text/TextField.hx",1638,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1653___caretNextCharacter,"openfl.text.TextField","__caretNextCharacter",0xafbbedf7,"openfl.text.TextField.__caretNextCharacter","openfl/text/TextField.hx",1653,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1660___caretNextLine,"openfl.text.TextField","__caretNextLine",0xd85e2866,"openfl.text.TextField.__caretNextLine","openfl/text/TextField.hx",1660,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1671___caretPreviousCharacter,"openfl.text.TextField","__caretPreviousCharacter",0x656722b3,"openfl.text.TextField.__caretPreviousCharacter","openfl/text/TextField.hx",1671,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1678___caretPreviousLine,"openfl.text.TextField","__caretPreviousLine",0x13772d2a,"openfl.text.TextField.__caretPreviousLine","openfl/text/TextField.hx",1678,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1689___disableInput,"openfl.text.TextField","__disableInput",0xd160e346,"openfl.text.TextField.__disableInput","openfl/text/TextField.hx",1689,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1703___dispatch,"openfl.text.TextField","__dispatch",0x10db5efe,"openfl.text.TextField.__dispatch","openfl/text/TextField.hx",1703,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1733___enableInput,"openfl.text.TextField","__enableInput",0x9681fcc3,"openfl.text.TextField.__enableInput","openfl/text/TextField.hx",1733,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1759___getAdvance,"openfl.text.TextField","__getAdvance",0x6a1cb7d0,"openfl.text.TextField.__getAdvance","openfl/text/TextField.hx",1759,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1764___getBounds,"openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",1764,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1781___getCharBoundaries,"openfl.text.TextField","__getCharBoundaries",0x097fccb0,"openfl.text.TextField.__getCharBoundaries","openfl/text/TextField.hx",1781,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1813___getCharIndexOnDifferentLine,"openfl.text.TextField","__getCharIndexOnDifferentLine",0x6afd9f64,"openfl.text.TextField.__getCharIndexOnDifferentLine","openfl/text/TextField.hx",1813,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1850___getCursor,"openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",1850,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1866___getGroup,"openfl.text.TextField","__getGroup",0xec43530d,"openfl.text.TextField.__getGroup","openfl/text/TextField.hx",1866,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1915___getPosition,"openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",1915,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1947___hitTest,"openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",1947,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1971___hitTestMask,"openfl.text.TextField","__hitTestMask",0x0119c60d,"openfl.text.TextField.__hitTestMask","openfl/text/TextField.hx",1971,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_1987___replaceSelectedText,"openfl.text.TextField","__replaceSelectedText",0x229f8d38,"openfl.text.TextField.__replaceSelectedText","openfl/text/TextField.hx",1987,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2010___replaceText,"openfl.text.TextField","__replaceText",0x6f2a5d3d,"openfl.text.TextField.__replaceText","openfl/text/TextField.hx",2010,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2141___startCursorTimer,"openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",2141,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2151___startTextInput,"openfl.text.TextField","__startTextInput",0x3a7d3e9f,"openfl.text.TextField.__startTextInput","openfl/text/TextField.hx",2151,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2167___stopCursorTimer,"openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",2167,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2183___stopTextInput,"openfl.text.TextField","__stopTextInput",0x6c7c2cf7,"openfl.text.TextField.__stopTextInput","openfl/text/TextField.hx",2183,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2194___updateLayout,"openfl.text.TextField","__updateLayout",0x2d3b57d7,"openfl.text.TextField.__updateLayout","openfl/text/TextField.hx",2194,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2225___updateScrollH,"openfl.text.TextField","__updateScrollH",0x4ea991ce,"openfl.text.TextField.__updateScrollH","openfl/text/TextField.hx",2225,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2299___updateScrollV,"openfl.text.TextField","__updateScrollV",0x4ea991dc,"openfl.text.TextField.__updateScrollV","openfl/text/TextField.hx",2299,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2345___updateMouseDrag,"openfl.text.TextField","__updateMouseDrag",0x2a5075ac,"openfl.text.TextField.__updateMouseDrag","openfl/text/TextField.hx",2345,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2373___updateText,"openfl.text.TextField","__updateText",0x315de09a,"openfl.text.TextField.__updateText","openfl/text/TextField.hx",2373,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2410___updateTransforms,"openfl.text.TextField","__updateTransforms",0x79c7d534,"openfl.text.TextField.__updateTransforms","openfl/text/TextField.hx",2410,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2418_get_antiAliasType,"openfl.text.TextField","get_antiAliasType",0x57115f1b,"openfl.text.TextField.get_antiAliasType","openfl/text/TextField.hx",2418,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2422_set_antiAliasType,"openfl.text.TextField","set_antiAliasType",0x7a7f3727,"openfl.text.TextField.set_antiAliasType","openfl/text/TextField.hx",2422,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2433_get_autoSize,"openfl.text.TextField","get_autoSize",0xd7aef1fd,"openfl.text.TextField.get_autoSize","openfl/text/TextField.hx",2433,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2437_set_autoSize,"openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",2437,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2450_get_background,"openfl.text.TextField","get_background",0x50119b5b,"openfl.text.TextField.get_background","openfl/text/TextField.hx",2450,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2454_set_background,"openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",2454,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2466_get_backgroundColor,"openfl.text.TextField","get_backgroundColor",0x63403c08,"openfl.text.TextField.get_backgroundColor","openfl/text/TextField.hx",2466,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2470_set_backgroundColor,"openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",2470,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2482_get_border,"openfl.text.TextField","get_border",0xa3e0d9d9,"openfl.text.TextField.get_border","openfl/text/TextField.hx",2482,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2486_set_border,"openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",2486,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2498_get_borderColor,"openfl.text.TextField","get_borderColor",0x6267b4ca,"openfl.text.TextField.get_borderColor","openfl/text/TextField.hx",2498,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2502_set_borderColor,"openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",2502,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2513_get_bottomScrollV,"openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",2513,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2521_get_caretIndex,"openfl.text.TextField","get_caretIndex",0x074fbdfc,"openfl.text.TextField.get_caretIndex","openfl/text/TextField.hx",2521,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2526_get_defaultTextFormat,"openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",2526,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2530_set_defaultTextFormat,"openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",2530,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2542_get_displayAsPassword,"openfl.text.TextField","get_displayAsPassword",0x62bc3b42,"openfl.text.TextField.get_displayAsPassword","openfl/text/TextField.hx",2542,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2546_set_displayAsPassword,"openfl.text.TextField","set_displayAsPassword",0xb6c5094e,"openfl.text.TextField.set_displayAsPassword","openfl/text/TextField.hx",2546,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2562_get_embedFonts,"openfl.text.TextField","get_embedFonts",0xb8d5ce98,"openfl.text.TextField.get_embedFonts","openfl/text/TextField.hx",2562,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2574_set_embedFonts,"openfl.text.TextField","set_embedFonts",0xd8f5b70c,"openfl.text.TextField.set_embedFonts","openfl/text/TextField.hx",2574,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2579_get_gridFitType,"openfl.text.TextField","get_gridFitType",0x3fa66af8,"openfl.text.TextField.get_gridFitType","openfl/text/TextField.hx",2579,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2591_set_gridFitType,"openfl.text.TextField","set_gridFitType",0x3b71e804,"openfl.text.TextField.set_gridFitType","openfl/text/TextField.hx",2591,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2595_get_height,"openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",2595,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2601_set_height,"openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",2601,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2620_get_htmlText,"openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",2620,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2625_set_htmlText,"openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",2625,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2677_get_length,"openfl.text.TextField","get_length",0xdece21d3,"openfl.text.TextField.get_length","openfl/text/TextField.hx",2677,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2688_get_maxChars,"openfl.text.TextField","get_maxChars",0x980651c6,"openfl.text.TextField.get_maxChars","openfl/text/TextField.hx",2688,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2692_set_maxChars,"openfl.text.TextField","set_maxChars",0xacff753a,"openfl.text.TextField.set_maxChars","openfl/text/TextField.hx",2692,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2706_get_maxScrollH,"openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",2706,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2713_get_maxScrollV,"openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",2713,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2721_get_mouseWheelEnabled,"openfl.text.TextField","get_mouseWheelEnabled",0xdd79871e,"openfl.text.TextField.get_mouseWheelEnabled","openfl/text/TextField.hx",2721,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2726_set_mouseWheelEnabled,"openfl.text.TextField","set_mouseWheelEnabled",0x3182552a,"openfl.text.TextField.set_mouseWheelEnabled","openfl/text/TextField.hx",2726,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2731_get_multiline,"openfl.text.TextField","get_multiline",0x24925820,"openfl.text.TextField.get_multiline","openfl/text/TextField.hx",2731,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2735_set_multiline,"openfl.text.TextField","set_multiline",0x69983a2c,"openfl.text.TextField.set_multiline","openfl/text/TextField.hx",2735,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2750_get_numLines,"openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",2750,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2758_get_restrict,"openfl.text.TextField","get_restrict",0x99d42d69,"openfl.text.TextField.get_restrict","openfl/text/TextField.hx",2758,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2762_set_restrict,"openfl.text.TextField","set_restrict",0xaecd50dd,"openfl.text.TextField.set_restrict","openfl/text/TextField.hx",2762,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2774_get_scrollH,"openfl.text.TextField","get_scrollH",0xbeccf60e,"openfl.text.TextField.get_scrollH","openfl/text/TextField.hx",2774,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2778_set_scrollH,"openfl.text.TextField","set_scrollH",0xc939fd1a,"openfl.text.TextField.set_scrollH","openfl/text/TextField.hx",2778,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2797_get_scrollV,"openfl.text.TextField","get_scrollV",0xbeccf61c,"openfl.text.TextField.get_scrollV","openfl/text/TextField.hx",2797,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2801_set_scrollV,"openfl.text.TextField","set_scrollV",0xc939fd28,"openfl.text.TextField.set_scrollV","openfl/text/TextField.hx",2801,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2817_get_selectable,"openfl.text.TextField","get_selectable",0xee1ebe03,"openfl.text.TextField.get_selectable","openfl/text/TextField.hx",2817,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2821_set_selectable,"openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",2821,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2839_get_selectionBeginIndex,"openfl.text.TextField","get_selectionBeginIndex",0xb79fa288,"openfl.text.TextField.get_selectionBeginIndex","openfl/text/TextField.hx",2839,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2844_get_selectionEndIndex,"openfl.text.TextField","get_selectionEndIndex",0xc3677dd6,"openfl.text.TextField.get_selectionEndIndex","openfl/text/TextField.hx",2844,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2849_get_sharpness,"openfl.text.TextField","get_sharpness",0xa1a5a7b4,"openfl.text.TextField.get_sharpness","openfl/text/TextField.hx",2849,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2853_set_sharpness,"openfl.text.TextField","set_sharpness",0xe6ab89c0,"openfl.text.TextField.set_sharpness","openfl/text/TextField.hx",2853,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2865_get_tabEnabled,"openfl.text.TextField","get_tabEnabled",0x69fcfe19,"openfl.text.TextField.get_tabEnabled","openfl/text/TextField.hx",2865,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2870_get_text,"openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",2870,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2874_set_text,"openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",2874,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2907_get_textColor,"openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",2907,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2911_set_textColor,"openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",2911,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2927_get_textWidth,"openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",2927,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2933_get_textHeight,"openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",2933,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2940_get_type,"openfl.text.TextField","get_type",0x3b1c7a67,"openfl.text.TextField.get_type","openfl/text/TextField.hx",2940,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2944_set_type,"openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",2944,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2971_get_width,"openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",2971,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2977_set_width,"openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",2977,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2993_get_wordWrap,"openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",2993,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_2997_set_wordWrap,"openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",2997,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3010_get_x,"openfl.text.TextField","get_x",0xd93e9aab,"openfl.text.TextField.get_x","openfl/text/TextField.hx",3010,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3014_set_x,"openfl.text.TextField","set_x",0xc20d90b7,"openfl.text.TextField.set_x","openfl/text/TextField.hx",3014,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3021_get_y,"openfl.text.TextField","get_y",0xd93e9aac,"openfl.text.TextField.get_y","openfl/text/TextField.hx",3021,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3025_set_y,"openfl.text.TextField","set_y",0xc20d90b8,"openfl.text.TextField.set_y","openfl/text/TextField.hx",3025,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3032_stage_onMouseMove,"openfl.text.TextField","stage_onMouseMove",0x47084bd2,"openfl.text.TextField.stage_onMouseMove","openfl/text/TextField.hx",3032,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3068_stage_onMouseUp,"openfl.text.TextField","stage_onMouseUp",0x9bb86cdc,"openfl.text.TextField.stage_onMouseUp","openfl/text/TextField.hx",3068,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3109_this_onAddedToStage,"openfl.text.TextField","this_onAddedToStage",0x3dbcbc7f,"openfl.text.TextField.this_onAddedToStage","openfl/text/TextField.hx",3109,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3114_this_onEnterFrame,"openfl.text.TextField","this_onEnterFrame",0xf6c59f11,"openfl.text.TextField.this_onEnterFrame","openfl/text/TextField.hx",3114,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3120_this_onFocusIn,"openfl.text.TextField","this_onFocusIn",0x90f9e141,"openfl.text.TextField.this_onFocusIn","openfl/text/TextField.hx",3120,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3127_this_onFocusOut,"openfl.text.TextField","this_onFocusOut",0x49afcbb2,"openfl.text.TextField.this_onFocusOut","openfl/text/TextField.hx",3127,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3160_this_onKeyDown,"openfl.text.TextField","this_onKeyDown",0xebbe0505,"openfl.text.TextField.this_onKeyDown","openfl/text/TextField.hx",3160,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3171_this_onMouseDown,"openfl.text.TextField","this_onMouseDown",0xfda1ed8b,"openfl.text.TextField.this_onMouseDown","openfl/text/TextField.hx",3171,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3194_this_onMouseWheel,"openfl.text.TextField","this_onMouseWheel",0xdbfcc352,"openfl.text.TextField.this_onMouseWheel","openfl/text/TextField.hx",3194,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3202_this_onDoubleClick,"openfl.text.TextField","this_onDoubleClick",0xbfe820db,"openfl.text.TextField.this_onDoubleClick","openfl/text/TextField.hx",3202,0xccf02094)
static const ::String _hx_array_data_efd5a8ca_154[] = {
	HX_("\n",0a,00,00,00),HX_(".",2e,00,00,00),HX_("!",21,00,00,00),HX_("?",3f,00,00,00),HX_(",",2c,00,00,00),HX_(" ",20,00,00,00),HX_(";",3b,00,00,00),HX_(":",3a,00,00,00),HX_("(",28,00,00,00),HX_(")",29,00,00,00),HX_("-",2d,00,00,00),HX_("_",5f,00,00,00),HX_("/",2f,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3252_window_onKeyDown,"openfl.text.TextField","window_onKeyDown",0x61330e17,"openfl.text.TextField.window_onKeyDown","openfl/text/TextField.hx",3252,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_3478_window_onTextInput,"openfl.text.TextField","window_onTextInput",0xe9818213,"openfl.text.TextField.window_onTextInput","openfl/text/TextField.hx",3478,0xccf02094)
HX_LOCAL_STACK_FRAME(_hx_pos_d001dbc361c2c159_127_boot,"openfl.text.TextField","boot",0x024a6e56,"openfl.text.TextField.boot","openfl/text/TextField.hx",127,0xccf02094)
namespace openfl{
namespace text{

void TextField_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_124_new)
HXLINE( 676)		this->_hx___mouseScrollVCounter = 0;
HXLINE( 812)		super::__construct();
HXLINE( 814)		this->_hx___drawableType = 7;
HXLINE( 815)		this->_hx___caretIndex = -1;
HXLINE( 816)		this->_hx___displayAsPassword = false;
HXLINE( 817)		this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 818)		this->_hx___textEngine =  ::openfl::text::_internal::TextEngine_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 819)		this->_hx___layoutDirty = true;
HXLINE( 820)		this->_hx___offsetX = ( (Float)(0) );
HXLINE( 821)		this->_hx___offsetY = ( (Float)(0) );
HXLINE( 822)		this->_hx___mouseWheelEnabled = true;
HXLINE( 823)		this->_hx___text = HX_("",00,00,00,00);
HXLINE( 825)		this->doubleClickEnabled = true;
HXLINE( 827)		if (::hx::IsNull( ::openfl::text::TextField_obj::_hx___defaultTextFormat )) {
HXLINE( 829)			::openfl::text::TextField_obj::_hx___defaultTextFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("Times New Roman",03,86,44,c3),12,0,false,false,false,HX_("",00,00,00,00),HX_("",00,00,00,00),3,0,0,0,0);
HXLINE( 830)			::openfl::text::TextField_obj::_hx___defaultTextFormat->blockIndent = 0;
HXLINE( 831)			::openfl::text::TextField_obj::_hx___defaultTextFormat->bullet = false;
HXLINE( 832)			::openfl::text::TextField_obj::_hx___defaultTextFormat->letterSpacing = 0;
HXLINE( 833)			::openfl::text::TextField_obj::_hx___defaultTextFormat->kerning = false;
            		}
HXLINE( 836)		this->_hx___textFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 837)		{
HXLINE( 837)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN( 837)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,this->_hx___textFormat,0,0));
            		}
HXLINE( 839)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->this_onMouseDown_dyn(),null(),null(),null());
HXLINE( 840)		this->addEventListener(HX_("focusIn",dd,45,83,41),this->this_onFocusIn_dyn(),null(),null(),null());
HXLINE( 841)		this->addEventListener(HX_("focusOut",96,6f,5e,11),this->this_onFocusOut_dyn(),null(),null(),null());
HXLINE( 842)		this->addEventListener(HX_("keyDown",a1,69,47,9c),this->this_onKeyDown_dyn(),null(),null(),null());
HXLINE( 843)		this->addEventListener(HX_("mouseWheel",36,28,87,e7),this->this_onMouseWheel_dyn(),null(),null(),null());
HXLINE( 845)		this->addEventListener(HX_("doubleClick",77,03,76,cd),this->this_onDoubleClick_dyn(),null(),null(),null());
            	}

Dynamic TextField_obj::__CreateEmpty() { return new TextField_obj; }

void *TextField_obj::_hx_vtable = 0;

Dynamic TextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextField_obj > _hx_result = new TextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void TextField_obj::appendText(::String text){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_858_appendText)
HXLINE( 859)		bool _hx_tmp;
HXDLIN( 859)		if (::hx::IsNotNull( text )) {
HXLINE( 859)			_hx_tmp = (text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 859)			_hx_tmp = true;
            		}
HXDLIN( 859)		if (_hx_tmp) {
HXLINE( 859)			return;
            		}
HXLINE( 861)		this->_hx___dirty = true;
HXLINE( 862)		this->_hx___layoutDirty = true;
HXLINE( 863)		if (!(this->_hx___renderDirty)) {
HXLINE( 863)			this->_hx___renderDirty = true;
HXDLIN( 863)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 865)		this->_hx___updateText((this->_hx___text + text));
HXLINE( 867)		::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN( 867)		( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->end = this->_hx___text.length;
HXLINE( 869)		this->_hx___selectionIndex = (this->_hx___caretIndex = this->_hx___text.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

 ::openfl::geom::Rectangle TextField_obj::getCharBoundaries(int charIndex){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_884_getCharBoundaries)
HXLINE( 885)		bool _hx_tmp;
HXDLIN( 885)		if ((charIndex >= 0)) {
HXLINE( 885)			_hx_tmp = (charIndex > (this->_hx___text.length - 1));
            		}
            		else {
HXLINE( 885)			_hx_tmp = true;
            		}
HXDLIN( 885)		if (_hx_tmp) {
HXLINE( 885)			return null();
            		}
HXLINE( 887)		 ::openfl::geom::Rectangle rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 889)		if (this->_hx___getCharBoundaries(charIndex,rect)) {
HXLINE( 891)			return rect;
            		}
            		else {
HXLINE( 895)			return null();
            		}
HXLINE( 889)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_910_getCharIndexAtPoint)
HXLINE( 911)		bool _hx_tmp;
HXDLIN( 911)		bool _hx_tmp1;
HXDLIN( 911)		bool _hx_tmp2;
HXDLIN( 911)		if (!((x <= 2))) {
HXLINE( 911)			_hx_tmp2 = (x > (this->get_width() + 4));
            		}
            		else {
HXLINE( 911)			_hx_tmp2 = true;
            		}
HXDLIN( 911)		if (!(_hx_tmp2)) {
HXLINE( 911)			_hx_tmp1 = (y <= 0);
            		}
            		else {
HXLINE( 911)			_hx_tmp1 = true;
            		}
HXDLIN( 911)		if (!(_hx_tmp1)) {
HXLINE( 911)			_hx_tmp = (y > (this->get_height() + 4));
            		}
            		else {
HXLINE( 911)			_hx_tmp = true;
            		}
HXDLIN( 911)		if (_hx_tmp) {
HXLINE( 911)			return -1;
            		}
HXLINE( 913)		this->_hx___updateLayout();
HXLINE( 915)		x = (x + this->get_scrollH());
HXLINE( 917)		{
HXLINE( 917)			int _g = 0;
HXDLIN( 917)			int _g1 = (this->get_scrollV() - 1);
HXDLIN( 917)			while((_g < _g1)){
HXLINE( 917)				_g = (_g + 1);
HXDLIN( 917)				int i = (_g - 1);
HXLINE( 919)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE( 922)		{
HXLINE( 922)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN( 922)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 922)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 924)				bool _hx_tmp;
HXDLIN( 924)				if ((y >= group1->offsetY)) {
HXLINE( 924)					_hx_tmp = (y <= (group1->offsetY + group1->height));
            				}
            				else {
HXLINE( 924)					_hx_tmp = false;
            				}
HXDLIN( 924)				if (_hx_tmp) {
HXLINE( 926)					bool _hx_tmp;
HXDLIN( 926)					if ((x >= group1->offsetX)) {
HXLINE( 926)						_hx_tmp = (x <= (group1->offsetX + group1->width));
            					}
            					else {
HXLINE( 926)						_hx_tmp = false;
            					}
HXDLIN( 926)					if (_hx_tmp) {
HXLINE( 928)						Float advance = ((Float)0.0);
HXLINE( 930)						{
HXLINE( 930)							int _g = 0;
HXDLIN( 930)							int _g1 = group1->positions->length;
HXDLIN( 930)							while((_g < _g1)){
HXLINE( 930)								_g = (_g + 1);
HXDLIN( 930)								int i = (_g - 1);
HXLINE( 932)								Float advance1;
HXDLIN( 932)								bool advance2;
HXDLIN( 932)								if ((i >= 0)) {
HXLINE( 932)									advance2 = (i < group1->positions->length);
            								}
            								else {
HXLINE( 932)									advance2 = false;
            								}
HXDLIN( 932)								if (advance2) {
HXLINE( 932)									advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE( 932)									advance1 = ( (Float)(0) );
            								}
HXDLIN( 932)								advance = (advance + advance1);
HXLINE( 934)								if ((x <= (group1->offsetX + advance))) {
HXLINE( 936)									return (group1->startIndex + i);
            								}
            							}
            						}
HXLINE( 940)						return group1->endIndex;
            					}
            				}
            			}
            		}
HXLINE( 945)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_960_getFirstCharInParagraph)
HXLINE( 961)		bool _hx_tmp;
HXDLIN( 961)		if ((charIndex >= 0)) {
HXLINE( 961)			_hx_tmp = (charIndex > this->get_text().length);
            		}
            		else {
HXLINE( 961)			_hx_tmp = true;
            		}
HXDLIN( 961)		if (_hx_tmp) {
HXLINE( 961)			return -1;
            		}
HXLINE( 962)		if ((this->_hx___textEngine->lineBreaks->get_length() == 0)) {
HXLINE( 962)			return 0;
            		}
HXLINE( 964)		{
HXLINE( 964)			int _g = 0;
HXDLIN( 964)			int _g1 = this->_hx___textEngine->lineBreaks->get_length();
HXDLIN( 964)			while((_g < _g1)){
HXLINE( 964)				_g = (_g + 1);
HXDLIN( 964)				int i = (_g - 1);
HXLINE( 966)				if ((charIndex <= this->_hx___textEngine->lineBreaks->get(i))) {
HXLINE( 968)					if ((i == 0)) {
HXLINE( 968)						return 0;
            					}
            					else {
HXLINE( 968)						return (this->_hx___textEngine->lineBreaks->get((i - 1)) + 1);
            					}
            				}
            			}
            		}
HXLINE( 972)		::Dynamic this1 = this->_hx___textEngine->lineBreaks;
HXDLIN( 972)		return (( ( ::openfl::_Vector::IntVector)(this1) )->get((this->_hx___textEngine->lineBreaks->get_length() - 1)) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1007_getLineIndexAtPoint)
HXLINE(1008)		this->_hx___updateLayout();
HXLINE(1010)		bool _hx_tmp;
HXDLIN(1010)		bool _hx_tmp1;
HXDLIN(1010)		bool _hx_tmp2;
HXDLIN(1010)		if (!((x <= 2))) {
HXLINE(1010)			_hx_tmp2 = (x > (this->get_width() + 4));
            		}
            		else {
HXLINE(1010)			_hx_tmp2 = true;
            		}
HXDLIN(1010)		if (!(_hx_tmp2)) {
HXLINE(1010)			_hx_tmp1 = (y <= 0);
            		}
            		else {
HXLINE(1010)			_hx_tmp1 = true;
            		}
HXDLIN(1010)		if (!(_hx_tmp1)) {
HXLINE(1010)			_hx_tmp = (y > (this->get_height() + 4));
            		}
            		else {
HXLINE(1010)			_hx_tmp = true;
            		}
HXDLIN(1010)		if (_hx_tmp) {
HXLINE(1010)			return -1;
            		}
HXLINE(1012)		{
HXLINE(1012)			int _g = 0;
HXDLIN(1012)			int _g1 = (this->get_scrollV() - 1);
HXDLIN(1012)			while((_g < _g1)){
HXLINE(1012)				_g = (_g + 1);
HXDLIN(1012)				int i = (_g - 1);
HXLINE(1014)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE(1017)		{
HXLINE(1017)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1017)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1017)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1019)				bool _hx_tmp;
HXDLIN(1019)				if ((y >= group1->offsetY)) {
HXLINE(1019)					_hx_tmp = (y <= (group1->offsetY + group1->height));
            				}
            				else {
HXLINE(1019)					_hx_tmp = false;
            				}
HXDLIN(1019)				if (_hx_tmp) {
HXLINE(1021)					return group1->lineIndex;
            				}
            			}
            		}
HXLINE(1025)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1039_getLineIndexOfChar)
HXLINE(1040)		bool _hx_tmp;
HXDLIN(1040)		if ((charIndex >= 0)) {
HXLINE(1040)			_hx_tmp = (charIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(1040)			_hx_tmp = true;
            		}
HXDLIN(1040)		if (_hx_tmp) {
HXLINE(1040)			return -1;
            		}
HXLINE(1042)		this->_hx___updateLayout();
HXLINE(1044)		{
HXLINE(1044)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1044)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1044)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1046)				bool _hx_tmp;
HXDLIN(1046)				if ((group1->startIndex <= charIndex)) {
HXLINE(1046)					_hx_tmp = (group1->endIndex >= charIndex);
            				}
            				else {
HXLINE(1046)					_hx_tmp = false;
            				}
HXDLIN(1046)				if (_hx_tmp) {
HXLINE(1048)					return group1->lineIndex;
            				}
            			}
            		}
HXLINE(1052)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1063_getLineLength)
HXLINE(1064)		this->_hx___updateLayout();
HXLINE(1066)		bool _hx_tmp;
HXDLIN(1066)		if ((lineIndex >= 0)) {
HXLINE(1066)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1066)			_hx_tmp = true;
            		}
HXDLIN(1066)		if (_hx_tmp) {
HXLINE(1066)			return 0;
            		}
HXLINE(1068)		int startIndex = -1;
HXLINE(1069)		int endIndex = -1;
HXLINE(1071)		{
HXLINE(1071)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1071)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1071)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1073)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1075)					if ((startIndex == -1)) {
HXLINE(1075)						startIndex = group1->startIndex;
            					}
            				}
            				else {
HXLINE(1077)					if ((group1->lineIndex == (lineIndex + 1))) {
HXLINE(1079)						endIndex = group1->startIndex;
HXLINE(1080)						goto _hx_goto_14;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1084)		if ((endIndex == -1)) {
HXLINE(1084)			endIndex = this->_hx___text.length;
            		}
HXLINE(1085)		return (endIndex - startIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

 ::openfl::text::TextLineMetrics TextField_obj::getLineMetrics(int lineIndex){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1096_getLineMetrics)
HXLINE(1097)		this->_hx___updateLayout();
HXLINE(1099)		Float ascender = this->_hx___textEngine->lineAscents->get(lineIndex);
HXLINE(1100)		Float descender = this->_hx___textEngine->lineDescents->get(lineIndex);
HXLINE(1101)		Float leading = this->_hx___textEngine->lineLeadings->get(lineIndex);
HXLINE(1102)		Float lineHeight = this->_hx___textEngine->lineHeights->get(lineIndex);
HXLINE(1103)		Float lineWidth = this->_hx___textEngine->lineWidths->get(lineIndex);
HXLINE(1107)		Float margin;
HXDLIN(1107)		 ::Dynamic _hx_switch_0 = this->_hx___textFormat->align;
            		if (  (_hx_switch_0==0) ){
HXLINE(1107)			margin = ((this->_hx___textEngine->width - lineWidth) / ( (Float)(2) ));
HXDLIN(1107)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==1) ||  (_hx_switch_0==4) ){
HXLINE(1107)			margin = ((this->_hx___textEngine->width - lineWidth) - ( (Float)(2) ));
HXDLIN(1107)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==2) ||  (_hx_switch_0==3) ||  (_hx_switch_0==5) ){
HXLINE(1107)			margin = ( (Float)(2) );
HXDLIN(1107)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
HXLINE(1114)		return  ::openfl::text::TextLineMetrics_obj::__alloc( HX_CTX ,margin,lineWidth,lineHeight,ascender,descender,leading);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1127_getLineOffset)
HXLINE(1128)		this->_hx___updateLayout();
HXLINE(1130)		bool _hx_tmp;
HXDLIN(1130)		if ((lineIndex >= 0)) {
HXLINE(1130)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1130)			_hx_tmp = true;
            		}
HXDLIN(1130)		if (_hx_tmp) {
HXLINE(1130)			return -1;
            		}
HXLINE(1132)		{
HXLINE(1132)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1132)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1132)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1134)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1136)					return group1->startIndex;
            				}
            			}
            		}
HXLINE(1140)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText(int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1153_getLineText)
HXLINE(1154)		this->_hx___updateLayout();
HXLINE(1156)		bool _hx_tmp;
HXDLIN(1156)		if ((lineIndex >= 0)) {
HXLINE(1156)			_hx_tmp = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1156)			_hx_tmp = true;
            		}
HXDLIN(1156)		if (_hx_tmp) {
HXLINE(1156)			return null();
            		}
HXLINE(1158)		int startIndex = -1;
HXLINE(1159)		int endIndex = -1;
HXLINE(1161)		{
HXLINE(1161)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1161)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1161)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1163)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1165)					if ((startIndex == -1)) {
HXLINE(1165)						startIndex = group1->startIndex;
            					}
            				}
            				else {
HXLINE(1167)					if ((group1->lineIndex == (lineIndex + 1))) {
HXLINE(1169)						endIndex = group1->startIndex;
HXLINE(1170)						goto _hx_goto_20;
            					}
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE(1174)		if ((endIndex == -1)) {
HXLINE(1174)			endIndex = this->_hx___text.length;
            		}
HXLINE(1176)		return this->_hx___textEngine->text.substring(startIndex,endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength(int charIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1192_getParagraphLength)
HXLINE(1193)		bool _hx_tmp;
HXDLIN(1193)		if ((charIndex >= 0)) {
HXLINE(1193)			_hx_tmp = (charIndex > this->get_text().length);
            		}
            		else {
HXLINE(1193)			_hx_tmp = true;
            		}
HXDLIN(1193)		if (_hx_tmp) {
HXLINE(1193)			return -1;
            		}
HXLINE(1195)		int startIndex = this->getFirstCharInParagraph(charIndex);
HXLINE(1197)		if ((charIndex >= this->get_text().length)) {
HXLINE(1197)			return ((this->get_text().length - startIndex) + 1);
            		}
HXLINE(1199)		int endIndex = (this->_hx___textEngine->getLineBreakIndex(charIndex) + 1);
HXLINE(1201)		if ((endIndex == 0)) {
HXLINE(1201)			endIndex = this->_hx___text.length;
            		}
HXLINE(1202)		return (endIndex - startIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

 ::openfl::text::TextFormat TextField_obj::getTextFormat(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(-1);
            		int endIndex = __o_endIndex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1231_getTextFormat)
HXLINE(1232)		 ::openfl::text::TextFormat format = null();
HXLINE(1234)		bool _hx_tmp;
HXDLIN(1234)		bool _hx_tmp1;
HXDLIN(1234)		bool _hx_tmp2;
HXDLIN(1234)		if ((beginIndex < this->get_text().length)) {
HXLINE(1234)			_hx_tmp2 = (beginIndex < -1);
            		}
            		else {
HXLINE(1234)			_hx_tmp2 = true;
            		}
HXDLIN(1234)		if (!(_hx_tmp2)) {
HXLINE(1234)			_hx_tmp1 = (endIndex > this->get_text().length);
            		}
            		else {
HXLINE(1234)			_hx_tmp1 = true;
            		}
HXDLIN(1234)		if (!(_hx_tmp1)) {
HXLINE(1234)			_hx_tmp = (endIndex < -1);
            		}
            		else {
HXLINE(1234)			_hx_tmp = true;
            		}
HXDLIN(1234)		if (_hx_tmp) {
HXLINE(1235)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds",37,5a,d3,87))));
            		}
HXLINE(1237)		if ((beginIndex == -1)) {
HXLINE(1237)			beginIndex = 0;
            		}
HXLINE(1238)		if ((endIndex == -1)) {
HXLINE(1238)			endIndex = this->get_text().length;
            		}
HXLINE(1240)		if ((beginIndex >= endIndex)) {
HXLINE(1240)			return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1242)		{
HXLINE(1242)			 ::Dynamic group = this->_hx___textEngine->textFormatRanges->iterator();
HXDLIN(1242)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1242)				 ::openfl::text::_internal::TextFormatRange group1 = ( ( ::openfl::text::_internal::TextFormatRange)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1244)				bool _hx_tmp;
HXDLIN(1244)				bool _hx_tmp1;
HXDLIN(1244)				if ((group1->start <= beginIndex)) {
HXLINE(1244)					_hx_tmp1 = (group1->end > beginIndex);
            				}
            				else {
HXLINE(1244)					_hx_tmp1 = false;
            				}
HXDLIN(1244)				if (!(_hx_tmp1)) {
HXLINE(1244)					if ((group1->start < endIndex)) {
HXLINE(1244)						_hx_tmp = (group1->end >= endIndex);
            					}
            					else {
HXLINE(1244)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1244)					_hx_tmp = true;
            				}
HXDLIN(1244)				if (_hx_tmp) {
HXLINE(1246)					if (::hx::IsNull( format )) {
HXLINE(1248)						format = group1->format->clone();
            					}
            					else {
HXLINE(1252)						if ((group1->format->font != format->font)) {
HXLINE(1252)							format->font = null();
            						}
HXLINE(1253)						if (::hx::IsNotEq( group1->format->size,format->size )) {
HXLINE(1253)							format->size = null();
            						}
HXLINE(1254)						if (::hx::IsNotEq( group1->format->color,format->color )) {
HXLINE(1254)							format->color = null();
            						}
HXLINE(1255)						if (::hx::IsNotEq( group1->format->bold,format->bold )) {
HXLINE(1255)							format->bold = null();
            						}
HXLINE(1256)						if (::hx::IsNotEq( group1->format->italic,format->italic )) {
HXLINE(1256)							format->italic = null();
            						}
HXLINE(1257)						if (::hx::IsNotEq( group1->format->underline,format->underline )) {
HXLINE(1257)							format->underline = null();
            						}
HXLINE(1258)						if ((group1->format->url != format->url)) {
HXLINE(1258)							format->url = null();
            						}
HXLINE(1259)						if ((group1->format->target != format->target)) {
HXLINE(1259)							format->target = null();
            						}
HXLINE(1260)						if (::hx::IsNotEq( group1->format->align,format->align )) {
HXLINE(1260)							format->align = null();
            						}
HXLINE(1261)						if (::hx::IsNotEq( group1->format->leftMargin,format->leftMargin )) {
HXLINE(1261)							format->leftMargin = null();
            						}
HXLINE(1262)						if (::hx::IsNotEq( group1->format->rightMargin,format->rightMargin )) {
HXLINE(1262)							format->rightMargin = null();
            						}
HXLINE(1263)						if (::hx::IsNotEq( group1->format->indent,format->indent )) {
HXLINE(1263)							format->indent = null();
            						}
HXLINE(1264)						if (::hx::IsNotEq( group1->format->leading,format->leading )) {
HXLINE(1264)							format->leading = null();
            						}
HXLINE(1265)						if (::hx::IsNotEq( group1->format->blockIndent,format->blockIndent )) {
HXLINE(1265)							format->blockIndent = null();
            						}
HXLINE(1266)						if (::hx::IsNotEq( group1->format->bullet,format->bullet )) {
HXLINE(1266)							format->bullet = null();
            						}
HXLINE(1267)						if (::hx::IsNotEq( group1->format->kerning,format->kerning )) {
HXLINE(1267)							format->kerning = null();
            						}
HXLINE(1268)						if (::hx::IsNotEq( group1->format->letterSpacing,format->letterSpacing )) {
HXLINE(1268)							format->letterSpacing = null();
            						}
HXLINE(1269)						if (::hx::IsPointerNotEq( group1->format->tabStops,format->tabStops )) {
HXLINE(1269)							format->tabStops = null();
            						}
            					}
            				}
            			}
            		}
HXLINE(1274)		if (::hx::IsNull( format )) {
HXLINE(1274)			format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1275)		return format;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

void TextField_obj::replaceSelectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1325_replaceSelectedText)
HXDLIN(1325)		this->_hx___replaceSelectedText(value,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

void TextField_obj::replaceText(int beginIndex,int endIndex,::String newText){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1346_replaceText)
HXDLIN(1346)		this->_hx___replaceText(beginIndex,endIndex,newText,false);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

void TextField_obj::setSelection(int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1363_setSelection)
HXLINE(1364)		this->_hx___selectionIndex = beginIndex;
HXLINE(1365)		this->_hx___caretIndex = endIndex;
HXLINE(1367)		this->_hx___updateScrollV();
HXLINE(1368)		this->_hx___updateScrollH();
HXLINE(1370)		bool _hx_tmp;
HXDLIN(1370)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1370)			_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(1370)			_hx_tmp = false;
            		}
HXDLIN(1370)		if (_hx_tmp) {
HXLINE(1372)			this->_hx___stopCursorTimer();
HXLINE(1373)			this->_hx___startCursorTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(-1);
            		int endIndex = __o_endIndex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1423_setTextFormat)
HXLINE(1424)		int max = this->get_text().length;
HXLINE(1425)		 ::openfl::text::_internal::TextFormatRange range;
HXLINE(1427)		if ((beginIndex == -1)) {
HXLINE(1429)			if ((endIndex == -1)) {
HXLINE(1429)				endIndex = max;
            			}
HXLINE(1430)			beginIndex = 0;
            		}
            		else {
HXLINE(1432)			if ((endIndex == -1)) {
HXLINE(1434)				endIndex = (beginIndex + 1);
            			}
            		}
HXLINE(1437)		if ((beginIndex == endIndex)) {
HXLINE(1437)			return;
            		}
HXLINE(1438)		bool _hx_tmp;
HXDLIN(1438)		bool _hx_tmp1;
HXDLIN(1438)		bool _hx_tmp2;
HXDLIN(1438)		bool _hx_tmp3;
HXDLIN(1438)		if ((beginIndex >= 0)) {
HXLINE(1438)			_hx_tmp3 = (endIndex <= 0);
            		}
            		else {
HXLINE(1438)			_hx_tmp3 = true;
            		}
HXDLIN(1438)		if (!(_hx_tmp3)) {
HXLINE(1438)			_hx_tmp2 = (endIndex < beginIndex);
            		}
            		else {
HXLINE(1438)			_hx_tmp2 = true;
            		}
HXDLIN(1438)		if (!(_hx_tmp2)) {
HXLINE(1438)			_hx_tmp1 = (beginIndex >= max);
            		}
            		else {
HXLINE(1438)			_hx_tmp1 = true;
            		}
HXDLIN(1438)		if (!(_hx_tmp1)) {
HXLINE(1438)			_hx_tmp = (endIndex > max);
            		}
            		else {
HXLINE(1438)			_hx_tmp = true;
            		}
HXDLIN(1438)		if (_hx_tmp) {
HXLINE(1438)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,null())));
            		}
HXLINE(1456)		bool _hx_tmp4;
HXDLIN(1456)		if ((beginIndex == 0)) {
HXLINE(1456)			_hx_tmp4 = (endIndex == max);
            		}
            		else {
HXLINE(1456)			_hx_tmp4 = false;
            		}
HXDLIN(1456)		if (_hx_tmp4) {
HXLINE(1459)			this->_hx___textEngine->textFormatRanges->set_length(1);
HXLINE(1461)			range = this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(1462)			range->start = 0;
HXLINE(1463)			range->end = max;
HXLINE(1464)			range->format->_hx___merge(format);
            		}
            		else {
HXLINE(1468)			int index = 0;
HXLINE(1469)			 ::openfl::text::_internal::TextFormatRange newRange;
HXLINE(1471)			while((index < this->_hx___textEngine->textFormatRanges->get_length())){
HXLINE(1473)				range = this->_hx___textEngine->textFormatRanges->get(index).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(1475)				if ((range->end <= beginIndex)) {
HXLINE(1478)					index = (index + 1);
            				}
            				else {
HXLINE(1480)					if ((range->start >= endIndex)) {
HXLINE(1483)						goto _hx_goto_28;
            					}
            					else {
HXLINE(1485)						bool _hx_tmp;
HXDLIN(1485)						if ((range->start <= beginIndex)) {
HXLINE(1485)							_hx_tmp = (range->end >= endIndex);
            						}
            						else {
HXLINE(1485)							_hx_tmp = false;
            						}
HXDLIN(1485)						if (_hx_tmp) {
HXLINE(1487)							bool _hx_tmp;
HXDLIN(1487)							if ((range->start == beginIndex)) {
HXLINE(1487)								_hx_tmp = (range->end == endIndex);
            							}
            							else {
HXLINE(1487)								_hx_tmp = false;
            							}
HXDLIN(1487)							if (_hx_tmp) {
HXLINE(1490)								range->format = range->format->clone();
HXLINE(1491)								range->format->_hx___merge(format);
HXLINE(1492)								goto _hx_goto_28;
            							}
            							else {
HXLINE(1494)								if ((range->start == beginIndex)) {
HXLINE(1497)									newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1498)									newRange->format->_hx___merge(format);
HXLINE(1499)									this->_hx___textEngine->textFormatRanges->insertAt(index,newRange);
HXLINE(1500)									range->start = endIndex;
HXLINE(1501)									index = (index + 2);
            								}
            								else {
HXLINE(1503)									if ((range->end == endIndex)) {
HXLINE(1506)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1507)										newRange->format->_hx___merge(format);
HXLINE(1508)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1510)										range->end = beginIndex;
HXLINE(1511)										goto _hx_goto_28;
            									}
            									else {
HXLINE(1516)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1517)										newRange->format->_hx___merge(format);
HXLINE(1518)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1520)										 ::openfl::text::TextFormat newRange1 = range->format->clone();
HXDLIN(1520)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,newRange1,endIndex,range->end);
HXLINE(1521)										this->_hx___textEngine->textFormatRanges->insertAt((index + 2),newRange);
HXLINE(1523)										range->end = beginIndex;
HXLINE(1524)										goto _hx_goto_28;
            									}
            								}
            							}
            						}
            						else {
HXLINE(1527)							bool _hx_tmp;
HXDLIN(1527)							if ((range->start >= beginIndex)) {
HXLINE(1527)								_hx_tmp = (range->end <= endIndex);
            							}
            							else {
HXLINE(1527)								_hx_tmp = false;
            							}
HXDLIN(1527)							if (_hx_tmp) {
HXLINE(1530)								if ((range->start == beginIndex)) {
HXLINE(1533)									range->format = range->format->clone();
HXLINE(1534)									range->format->_hx___merge(format);
HXLINE(1535)									range->end = endIndex;
            								}
            								else {
HXLINE(1540)									this->_hx___textEngine->textFormatRanges->removeAt(index).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
            								}
            							}
            							else {
HXLINE(1543)								bool _hx_tmp;
HXDLIN(1543)								if ((range->start > beginIndex)) {
HXLINE(1543)									_hx_tmp = (range->end > beginIndex);
            								}
            								else {
HXLINE(1543)									_hx_tmp = false;
            								}
HXDLIN(1543)								if (_hx_tmp) {
HXLINE(1546)									range->start = endIndex;
HXLINE(1547)									goto _hx_goto_28;
            								}
            								else {
HXLINE(1549)									bool _hx_tmp;
HXDLIN(1549)									if ((range->start < beginIndex)) {
HXLINE(1549)										_hx_tmp = (range->end <= endIndex);
            									}
            									else {
HXLINE(1549)										_hx_tmp = false;
            									}
HXDLIN(1549)									if (_hx_tmp) {
HXLINE(1552)										newRange =  ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,range->format->clone(),beginIndex,endIndex);
HXLINE(1553)										newRange->format->_hx___merge(format);
HXLINE(1554)										this->_hx___textEngine->textFormatRanges->insertAt((index + 1),newRange);
HXLINE(1555)										range->end = beginIndex;
HXLINE(1556)										index = (index + 2);
            									}
            									else {
HXLINE(1561)										index = (index + 1);
HXLINE(1562)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/TextField.hx",94,20,f0,cc),1562,HX_("openfl.text.TextField",ca,a8,d5,ef),HX_("setTextFormat",06,4e,f7,d5)));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_28:;
            		}
HXLINE(1589)		this->_hx___dirty = true;
HXLINE(1590)		this->_hx___layoutDirty = true;
HXLINE(1591)		if (!(this->_hx___renderDirty)) {
HXLINE(1591)			this->_hx___renderDirty = true;
HXDLIN(1591)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

bool TextField_obj::_hx___allowMouseFocus(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1596___allowMouseFocus)
HXDLIN(1596)		bool _hx_tmp;
HXDLIN(1596)		if (::hx::IsNotEq( this->_hx___textEngine->type,1 )) {
HXDLIN(1596)			_hx_tmp = this->get_tabEnabled();
            		}
            		else {
HXDLIN(1596)			_hx_tmp = true;
            		}
HXDLIN(1596)		if (!(_hx_tmp)) {
HXDLIN(1596)			return this->get_selectable();
            		}
            		else {
HXDLIN(1596)			return true;
            		}
HXDLIN(1596)		return false;
            	}


void TextField_obj::_hx___caretBeginningOfLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1601___caretBeginningOfLine)
HXDLIN(1601)		this->_hx___caretIndex = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfLine,(void))

void TextField_obj::_hx___caretBeginningOfNextLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1605___caretBeginningOfNextLine)
HXLINE(1606)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1608)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1610)			this->_hx___caretIndex = this->getLineOffset((lineIndex + 1));
            		}
            		else {
HXLINE(1614)			this->_hx___caretIndex = this->_hx___text.length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfNextLine,(void))

void TextField_obj::_hx___caretBeginningOfPreviousLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1619___caretBeginningOfPreviousLine)
HXLINE(1620)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1622)		if ((lineIndex > 0)) {
HXLINE(1624)			int index = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
HXLINE(1626)			if ((this->_hx___caretIndex == index)) {
HXLINE(1628)				this->_hx___caretIndex = this->getLineOffset((lineIndex - 1));
            			}
            			else {
HXLINE(1632)				this->_hx___caretIndex = index;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretBeginningOfPreviousLine,(void))

void TextField_obj::_hx___caretEndOfLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1638___caretEndOfLine)
HXLINE(1639)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1641)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1643)			this->_hx___caretIndex = (this->getLineOffset((lineIndex + 1)) - 1);
            		}
            		else {
HXLINE(1647)			this->_hx___caretIndex = this->_hx___text.length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretEndOfLine,(void))

void TextField_obj::_hx___caretNextCharacter(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1653___caretNextCharacter)
HXDLIN(1653)		if ((this->_hx___caretIndex < this->_hx___text.length)) {
HXLINE(1655)			this->_hx___caretIndex++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretNextCharacter,(void))

void TextField_obj::_hx___caretNextLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1660___caretNextLine)
HXLINE(1661)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1663)		if ((lineIndex < (this->_hx___textEngine->numLines - 1))) {
HXLINE(1665)			this->_hx___caretIndex = this->_hx___getCharIndexOnDifferentLine(this->get_caretIndex(),(lineIndex + 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretNextLine,(void))

void TextField_obj::_hx___caretPreviousCharacter(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1671___caretPreviousCharacter)
HXDLIN(1671)		if ((this->_hx___caretIndex > 0)) {
HXLINE(1673)			this->_hx___caretIndex--;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretPreviousCharacter,(void))

void TextField_obj::_hx___caretPreviousLine(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1678___caretPreviousLine)
HXLINE(1679)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(1681)		if ((lineIndex > 0)) {
HXLINE(1683)			this->_hx___caretIndex = this->_hx___getCharIndexOnDifferentLine(this->get_caretIndex(),(lineIndex - 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___caretPreviousLine,(void))

void TextField_obj::_hx___disableInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1689___disableInput)
HXDLIN(1689)		bool _hx_tmp;
HXDLIN(1689)		if (this->_hx___inputEnabled) {
HXDLIN(1689)			_hx_tmp = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXDLIN(1689)			_hx_tmp = false;
            		}
HXDLIN(1689)		if (_hx_tmp) {
HXLINE(1692)			this->stage->window->_hx___backend->setTextInputEnabled(false);
HXLINE(1693)			this->stage->window->onTextInput->remove(this->window_onTextInput_dyn());
HXLINE(1694)			this->stage->window->onKeyDown->remove(this->window_onKeyDown_dyn());
HXLINE(1697)			this->_hx___inputEnabled = false;
HXLINE(1698)			this->_hx___stopCursorTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___disableInput,(void))

bool TextField_obj::_hx___dispatch( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_1703___dispatch)
HXLINE(1704)		bool _hx_tmp;
HXDLIN(1704)		if ((event->eventPhase == 2)) {
HXLINE(1704)			_hx_tmp = (event->type == HX_("mouseUp",e0,f3,72,c0));
            		}
            		else {
HXLINE(1704)			_hx_tmp = false;
            		}
HXDLIN(1704)		if (_hx_tmp) {
HXLINE(1706)			 ::openfl::events::MouseEvent event1 = ( ( ::openfl::events::MouseEvent)(event) );
HXLINE(1707)			Float group = this->get_mouseX();
HXDLIN(1707)			 ::openfl::text::_internal::TextLayoutGroup group1 = this->_hx___getGroup(group,this->get_mouseY(),true);
HXLINE(1709)			if (::hx::IsNotNull( group1 )) {
HXLINE(1711)				::String url = group1->format->url;
HXLINE(1713)				bool _hx_tmp;
HXDLIN(1713)				if (::hx::IsNotNull( url )) {
HXLINE(1713)					_hx_tmp = (url != HX_("",00,00,00,00));
            				}
            				else {
HXLINE(1713)					_hx_tmp = false;
            				}
HXDLIN(1713)				if (_hx_tmp) {
HXLINE(1715)					if (::StringTools_obj::startsWith(url,HX_("event:",e0,4e,6a,96))) {
HXLINE(1717)						this->dispatchEvent( ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("link",fa,17,b3,47),false,false,url.substr(6,null())));
            					}
            					else {
HXLINE(1721)						::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url),null());
            					}
            				}
            			}
            		}
HXLINE(1727)		return this->super::_hx___dispatch(event);
            	}


void TextField_obj::_hx___enableInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1733___enableInput)
HXDLIN(1733)		if (::hx::IsNotNull( this->stage )) {
HXLINE(1735)			this->stage->window->_hx___backend->setTextInputEnabled(true);
HXLINE(1737)			if (!(this->_hx___inputEnabled)) {
HXLINE(1739)				this->stage->window->_hx___backend->setTextInputEnabled(true);
HXLINE(1741)				if (!(this->stage->window->onTextInput->has(this->window_onTextInput_dyn()))) {
HXLINE(1743)					this->stage->window->onTextInput->add(this->window_onTextInput_dyn(),null(),null());
HXLINE(1744)					this->stage->window->onKeyDown->add(this->window_onKeyDown_dyn(),null(),null());
            				}
HXLINE(1747)				this->_hx___inputEnabled = true;
HXLINE(1748)				this->_hx___startCursorTimer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___enableInput,(void))

Float TextField_obj::_hx___getAdvance( ::Dynamic position){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1759___getAdvance)
HXDLIN(1759)		return ( (Float)( ::Dynamic(position->__Field(HX_("advance",82,08,0c,ef),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_hx___getAdvance,return )

void TextField_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1764___getBounds)
HXLINE(1765)		this->_hx___updateLayout();
HXLINE(1767)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1768)		bounds->copyFrom(this->_hx___textEngine->bounds);
HXLINE(1770)		 ::openfl::geom::Matrix matrix1 = matrix;
HXDLIN(1770)		matrix1->tx = (matrix1->tx + this->_hx___offsetX);
HXLINE(1771)		 ::openfl::geom::Matrix matrix2 = matrix;
HXDLIN(1771)		matrix2->ty = (matrix2->ty + this->_hx___offsetY);
HXLINE(1773)		bounds->_hx___transform(bounds,matrix);
HXLINE(1775)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1777)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


bool TextField_obj::_hx___getCharBoundaries(int charIndex, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1781___getCharBoundaries)
HXLINE(1782)		bool _hx_tmp;
HXDLIN(1782)		if ((charIndex >= 0)) {
HXLINE(1782)			_hx_tmp = (charIndex > (this->_hx___text.length - 1));
            		}
            		else {
HXLINE(1782)			_hx_tmp = true;
            		}
HXDLIN(1782)		if (_hx_tmp) {
HXLINE(1782)			return false;
            		}
HXLINE(1784)		this->_hx___updateLayout();
HXLINE(1786)		{
HXLINE(1786)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1786)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1786)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1788)				bool _hx_tmp;
HXDLIN(1788)				if ((charIndex >= group1->startIndex)) {
HXLINE(1788)					_hx_tmp = (charIndex < group1->endIndex);
            				}
            				else {
HXLINE(1788)					_hx_tmp = false;
            				}
HXDLIN(1788)				if (_hx_tmp) {
HXLINE(1790)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1792)						Float x = group1->offsetX;
HXLINE(1794)						{
HXLINE(1794)							int _g = 0;
HXDLIN(1794)							int _g1 = (charIndex - group1->startIndex);
HXDLIN(1794)							while((_g < _g1)){
HXLINE(1794)								_g = (_g + 1);
HXDLIN(1794)								int i = (_g - 1);
HXLINE(1796)								Float x1;
HXDLIN(1796)								bool x2;
HXDLIN(1796)								if ((i >= 0)) {
HXLINE(1796)									x2 = (i < group1->positions->length);
            								}
            								else {
HXLINE(1796)									x2 = false;
            								}
HXDLIN(1796)								if (x2) {
HXLINE(1796)									x1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1796)									x1 = ( (Float)(0) );
            								}
HXDLIN(1796)								x = (x + x1);
            							}
            						}
HXLINE(1800)						int index = (charIndex - group1->startIndex);
HXDLIN(1800)						Float lastPosition;
HXDLIN(1800)						bool lastPosition1;
HXDLIN(1800)						if ((index >= 0)) {
HXLINE(1800)							lastPosition1 = (index < group1->positions->length);
            						}
            						else {
HXLINE(1800)							lastPosition1 = false;
            						}
HXDLIN(1800)						if (lastPosition1) {
HXLINE(1800)							lastPosition = group1->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            						}
            						else {
HXLINE(1800)							lastPosition = ( (Float)(0) );
            						}
HXLINE(1802)						rect->setTo(x,group1->offsetY,lastPosition,(group1->ascent + group1->descent));
HXLINE(1803)						return true;
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE(1805)							{
HXLINE(1805)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
            		}
HXLINE(1809)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getCharBoundaries,return )

int TextField_obj::_hx___getCharIndexOnDifferentLine(int charIndex,int lineIndex){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1813___getCharIndexOnDifferentLine)
HXLINE(1814)		bool _hx_tmp;
HXDLIN(1814)		if ((charIndex >= 0)) {
HXLINE(1814)			_hx_tmp = (charIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(1814)			_hx_tmp = true;
            		}
HXDLIN(1814)		if (_hx_tmp) {
HXLINE(1814)			return -1;
            		}
HXLINE(1815)		bool _hx_tmp1;
HXDLIN(1815)		if ((lineIndex >= 0)) {
HXLINE(1815)			_hx_tmp1 = (lineIndex > (this->_hx___textEngine->numLines - 1));
            		}
            		else {
HXLINE(1815)			_hx_tmp1 = true;
            		}
HXDLIN(1815)		if (_hx_tmp1) {
HXLINE(1815)			return -1;
            		}
HXLINE(1817)		 ::Dynamic x = null();
HXDLIN(1817)		 ::Dynamic y = null();
HXLINE(1819)		{
HXLINE(1819)			 ::Dynamic group = this->_hx___textEngine->layoutGroups->iterator();
HXDLIN(1819)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1819)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1821)				bool _hx_tmp;
HXDLIN(1821)				if ((charIndex >= group1->startIndex)) {
HXLINE(1821)					_hx_tmp = (charIndex <= group1->endIndex);
            				}
            				else {
HXLINE(1821)					_hx_tmp = false;
            				}
HXDLIN(1821)				if (_hx_tmp) {
HXLINE(1823)					x = group1->offsetX;
HXLINE(1825)					{
HXLINE(1825)						int _g = 0;
HXDLIN(1825)						int _g1 = (charIndex - group1->startIndex);
HXDLIN(1825)						while((_g < _g1)){
HXLINE(1825)							_g = (_g + 1);
HXDLIN(1825)							int i = (_g - 1);
HXLINE(1827)							Float x1;
HXDLIN(1827)							bool x2;
HXDLIN(1827)							if ((i >= 0)) {
HXLINE(1827)								x2 = (i < group1->positions->length);
            							}
            							else {
HXLINE(1827)								x2 = false;
            							}
HXDLIN(1827)							if (x2) {
HXLINE(1827)								x1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1827)								x1 = ( (Float)(0) );
            							}
HXDLIN(1827)							x = (x + x1);
            						}
            					}
HXLINE(1830)					if (::hx::IsNotNull( y )) {
HXLINE(1830)						return this->_hx___getPosition(( (Float)(x) ),( (Float)(y) ));
            					}
            				}
HXLINE(1833)				if ((group1->lineIndex == lineIndex)) {
HXLINE(1835)					y = (group1->offsetY + (group1->height / ( (Float)(2) )));
HXLINE(1837)					{
HXLINE(1837)						int _g = 0;
HXDLIN(1837)						int _g1 = (this->get_scrollV() - 1);
HXDLIN(1837)						while((_g < _g1)){
HXLINE(1837)							_g = (_g + 1);
HXDLIN(1837)							int i = (_g - 1);
HXLINE(1839)							y = (y - this->_hx___textEngine->lineHeights->get(i));
            						}
            					}
HXLINE(1842)					if (::hx::IsNotNull( x )) {
HXLINE(1842)						return this->_hx___getPosition(( (Float)(x) ),( (Float)(y) ));
            					}
            				}
            			}
            		}
HXLINE(1846)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getCharIndexOnDifferentLine,return )

::String TextField_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1850___getCursor)
HXLINE(1851)		Float group = this->get_mouseX();
HXDLIN(1851)		 ::openfl::text::_internal::TextLayoutGroup group1 = this->_hx___getGroup(group,this->get_mouseY(),true);
HXLINE(1853)		bool _hx_tmp;
HXDLIN(1853)		if (::hx::IsNotNull( group1 )) {
HXLINE(1853)			_hx_tmp = (group1->format->url != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(1853)			_hx_tmp = false;
            		}
HXDLIN(1853)		if (_hx_tmp) {
HXLINE(1855)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXLINE(1857)			if (this->_hx___textEngine->selectable) {
HXLINE(1859)				return HX_("ibeam",58,ca,26,b6);
            			}
            		}
HXLINE(1862)		return null();
            	}


 ::openfl::text::_internal::TextLayoutGroup TextField_obj::_hx___getGroup(Float x,Float y,::hx::Null< bool >  __o_precise){
            		bool precise = __o_precise.Default(false);
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1866___getGroup)
HXLINE(1867)		this->_hx___updateLayout();
HXLINE(1869)		x = (x + this->get_scrollH());
HXLINE(1871)		{
HXLINE(1871)			int _g = 0;
HXDLIN(1871)			int _g1 = (this->get_scrollV() - 1);
HXDLIN(1871)			while((_g < _g1)){
HXLINE(1871)				_g = (_g + 1);
HXDLIN(1871)				int i = (_g - 1);
HXLINE(1873)				y = (y + this->_hx___textEngine->lineHeights->get(i));
            			}
            		}
HXLINE(1876)		bool _hx_tmp;
HXDLIN(1876)		if (!(precise)) {
HXLINE(1876)			_hx_tmp = (y > this->_hx___textEngine->textHeight);
            		}
            		else {
HXLINE(1876)			_hx_tmp = false;
            		}
HXDLIN(1876)		if (_hx_tmp) {
HXLINE(1876)			y = this->_hx___textEngine->textHeight;
            		}
HXLINE(1878)		bool firstGroup = true;
HXLINE(1879)		 ::openfl::text::_internal::TextLayoutGroup group;
HXDLIN(1879)		 ::openfl::text::_internal::TextLayoutGroup nextGroup;
HXLINE(1881)		{
HXLINE(1881)			int _g2 = 0;
HXDLIN(1881)			int _g3 = this->_hx___textEngine->layoutGroups->get_length();
HXDLIN(1881)			while((_g2 < _g3)){
HXLINE(1881)				_g2 = (_g2 + 1);
HXDLIN(1881)				int i = (_g2 - 1);
HXLINE(1883)				group = this->_hx___textEngine->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1885)				if ((i < (this->_hx___textEngine->layoutGroups->get_length() - 1))) {
HXLINE(1887)					nextGroup = this->_hx___textEngine->layoutGroups->get((i + 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            				}
            				else {
HXLINE(1891)					nextGroup = null();
            				}
HXLINE(1894)				if (firstGroup) {
HXLINE(1896)					if ((y < group->offsetY)) {
HXLINE(1896)						y = group->offsetY;
            					}
HXLINE(1897)					if ((x < group->offsetX)) {
HXLINE(1897)						x = group->offsetX;
            					}
HXLINE(1898)					firstGroup = false;
            				}
HXLINE(1901)				bool _hx_tmp;
HXDLIN(1901)				bool _hx_tmp1;
HXDLIN(1901)				if ((y >= group->offsetY)) {
HXLINE(1901)					_hx_tmp1 = (y <= (group->offsetY + group->height));
            				}
            				else {
HXLINE(1901)					_hx_tmp1 = false;
            				}
HXDLIN(1901)				if (!(_hx_tmp1)) {
HXLINE(1901)					if (!(precise)) {
HXLINE(1901)						_hx_tmp = ::hx::IsNull( nextGroup );
            					}
            					else {
HXLINE(1901)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1901)					_hx_tmp = true;
            				}
HXDLIN(1901)				if (_hx_tmp) {
HXLINE(1903)					bool _hx_tmp;
HXDLIN(1903)					bool _hx_tmp1;
HXDLIN(1903)					if ((x >= group->offsetX)) {
HXLINE(1903)						_hx_tmp1 = (x <= (group->offsetX + group->width));
            					}
            					else {
HXLINE(1903)						_hx_tmp1 = false;
            					}
HXDLIN(1903)					if (!(_hx_tmp1)) {
HXLINE(1904)						if (!(precise)) {
HXLINE(1904)							if (::hx::IsNotNull( nextGroup )) {
HXLINE(1903)								_hx_tmp = (nextGroup->lineIndex != group->lineIndex);
            							}
            							else {
HXLINE(1903)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE(1903)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(1903)						_hx_tmp = true;
            					}
HXDLIN(1903)					if (_hx_tmp) {
HXLINE(1906)						return group;
            					}
            				}
            			}
            		}
HXLINE(1911)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,_hx___getGroup,return )

int TextField_obj::_hx___getPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1915___getPosition)
HXLINE(1916)		 ::openfl::text::_internal::TextLayoutGroup group = this->_hx___getGroup(x,y,null());
HXLINE(1918)		if (::hx::IsNull( group )) {
HXLINE(1920)			return this->_hx___text.length;
            		}
HXLINE(1923)		Float advance = ((Float)0.0);
HXLINE(1925)		{
HXLINE(1925)			int _g = 0;
HXDLIN(1925)			int _g1 = group->positions->length;
HXDLIN(1925)			while((_g < _g1)){
HXLINE(1925)				_g = (_g + 1);
HXDLIN(1925)				int i = (_g - 1);
HXLINE(1927)				Float advance1;
HXDLIN(1927)				bool advance2;
HXDLIN(1927)				if ((i >= 0)) {
HXLINE(1927)					advance2 = (i < group->positions->length);
            				}
            				else {
HXLINE(1927)					advance2 = false;
            				}
HXDLIN(1927)				if (advance2) {
HXLINE(1927)					advance1 = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            				}
            				else {
HXLINE(1927)					advance1 = ( (Float)(0) );
            				}
HXDLIN(1927)				advance = (advance + advance1);
HXLINE(1929)				if ((x <= (group->offsetX + advance))) {
HXLINE(1931)					Float _hx_tmp;
HXDLIN(1931)					bool _hx_tmp1;
HXDLIN(1931)					if ((i >= 0)) {
HXLINE(1931)						_hx_tmp1 = (i < group->positions->length);
            					}
            					else {
HXLINE(1931)						_hx_tmp1 = false;
            					}
HXDLIN(1931)					if (_hx_tmp1) {
HXLINE(1931)						_hx_tmp = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            					}
            					else {
HXLINE(1931)						_hx_tmp = ( (Float)(0) );
            					}
HXDLIN(1931)					Float _hx_tmp2;
HXDLIN(1931)					bool _hx_tmp3;
HXDLIN(1931)					if ((i >= 0)) {
HXLINE(1931)						_hx_tmp3 = (i < group->positions->length);
            					}
            					else {
HXLINE(1931)						_hx_tmp3 = false;
            					}
HXDLIN(1931)					if (_hx_tmp3) {
HXLINE(1931)						_hx_tmp2 = group->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            					}
            					else {
HXLINE(1931)						_hx_tmp2 = ( (Float)(0) );
            					}
HXDLIN(1931)					if ((x <= ((group->offsetX + (advance - _hx_tmp)) + (_hx_tmp2 / ( (Float)(2) ))))) {
HXLINE(1933)						return (group->startIndex + i);
            					}
            					else {
HXLINE(1937)						if (((group->startIndex + i) < group->endIndex)) {
HXLINE(1937)							return ((group->startIndex + i) + 1);
            						}
            						else {
HXLINE(1937)							return group->endIndex;
            						}
            					}
            				}
            			}
            		}
HXLINE(1942)		return group->endIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___getPosition,return )

bool TextField_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1947___hitTest)
HXLINE(1948)		bool _hx_tmp;
HXDLIN(1948)		bool _hx_tmp1;
HXDLIN(1948)		if (hitObject->get_visible()) {
HXLINE(1948)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(1948)			_hx_tmp1 = true;
            		}
HXDLIN(1948)		if (!(_hx_tmp1)) {
HXLINE(1948)			if (interactiveOnly) {
HXLINE(1948)				_hx_tmp = !(this->mouseEnabled);
            			}
            			else {
HXLINE(1948)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(1948)			_hx_tmp = true;
            		}
HXDLIN(1948)		if (_hx_tmp) {
HXLINE(1948)			return false;
            		}
HXLINE(1949)		bool _hx_tmp2;
HXDLIN(1949)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE(1949)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(1949)			_hx_tmp2 = false;
            		}
HXDLIN(1949)		if (_hx_tmp2) {
HXLINE(1949)			return false;
            		}
HXLINE(1951)		this->_hx___getRenderTransform();
HXLINE(1952)		this->_hx___updateLayout();
HXLINE(1954)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(1954)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(1954)		Float px;
HXDLIN(1954)		if ((norm == 0)) {
HXLINE(1954)			px = -(_this->tx);
            		}
            		else {
HXLINE(1954)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE(1955)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN(1955)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(1955)		Float py;
HXDLIN(1955)		if ((norm1 == 0)) {
HXLINE(1955)			py = -(_this1->ty);
            		}
            		else {
HXLINE(1955)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE(1957)		if (this->_hx___textEngine->bounds->contains(px,py)) {
HXLINE(1959)			if (::hx::IsNotNull( stack )) {
HXLINE(1961)				stack->push(hitObject);
            			}
HXLINE(1964)			return true;
            		}
HXLINE(1967)		return false;
            	}


bool TextField_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1971___hitTestMask)
HXLINE(1972)		this->_hx___getRenderTransform();
HXLINE(1973)		this->_hx___updateLayout();
HXLINE(1975)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(1975)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(1975)		Float px;
HXDLIN(1975)		if ((norm == 0)) {
HXLINE(1975)			px = -(_this->tx);
            		}
            		else {
HXLINE(1975)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE(1976)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN(1976)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(1976)		Float py;
HXDLIN(1976)		if ((norm1 == 0)) {
HXLINE(1976)			py = -(_this1->ty);
            		}
            		else {
HXLINE(1976)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE(1978)		if (this->_hx___textEngine->bounds->contains(px,py)) {
HXLINE(1980)			return true;
            		}
HXLINE(1983)		return false;
            	}


void TextField_obj::_hx___replaceSelectedText(::String value,::hx::Null< bool >  __o_restrict){
            		bool restrict = __o_restrict.Default(true);
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_1987___replaceSelectedText)
HXLINE(1988)		if (::hx::IsNull( value )) {
HXLINE(1988)			value = HX_("",00,00,00,00);
            		}
HXLINE(1989)		bool _hx_tmp;
HXDLIN(1989)		if ((value == HX_("",00,00,00,00))) {
HXLINE(1989)			_hx_tmp = (this->_hx___selectionIndex == this->_hx___caretIndex);
            		}
            		else {
HXLINE(1989)			_hx_tmp = false;
            		}
HXDLIN(1989)		if (_hx_tmp) {
HXLINE(1989)			return;
            		}
HXLINE(1991)		int startIndex;
HXDLIN(1991)		if ((this->_hx___caretIndex < this->_hx___selectionIndex)) {
HXLINE(1991)			startIndex = this->_hx___caretIndex;
            		}
            		else {
HXLINE(1991)			startIndex = this->_hx___selectionIndex;
            		}
HXLINE(1992)		int endIndex;
HXDLIN(1992)		if ((this->_hx___caretIndex > this->_hx___selectionIndex)) {
HXLINE(1992)			endIndex = this->_hx___caretIndex;
            		}
            		else {
HXLINE(1992)			endIndex = this->_hx___selectionIndex;
            		}
HXLINE(1994)		bool _hx_tmp1;
HXDLIN(1994)		bool _hx_tmp2;
HXDLIN(1994)		if ((startIndex == endIndex)) {
HXLINE(1994)			_hx_tmp2 = (this->_hx___textEngine->maxChars > 0);
            		}
            		else {
HXLINE(1994)			_hx_tmp2 = false;
            		}
HXDLIN(1994)		if (_hx_tmp2) {
HXLINE(1994)			_hx_tmp1 = (this->_hx___text.length == this->_hx___textEngine->maxChars);
            		}
            		else {
HXLINE(1994)			_hx_tmp1 = false;
            		}
HXDLIN(1994)		if (_hx_tmp1) {
HXLINE(1994)			return;
            		}
HXLINE(1996)		if ((startIndex > this->_hx___text.length)) {
HXLINE(1996)			startIndex = this->_hx___text.length;
            		}
HXLINE(1997)		if ((endIndex > this->_hx___text.length)) {
HXLINE(1997)			endIndex = this->_hx___text.length;
            		}
HXLINE(1998)		if ((endIndex < startIndex)) {
HXLINE(2000)			int cache = endIndex;
HXLINE(2001)			endIndex = startIndex;
HXLINE(2002)			startIndex = cache;
            		}
HXLINE(2004)		if ((startIndex < 0)) {
HXLINE(2004)			startIndex = 0;
            		}
HXLINE(2006)		this->_hx___replaceText(startIndex,endIndex,value,restrict);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,_hx___replaceSelectedText,(void))

void TextField_obj::_hx___replaceText(int beginIndex,int endIndex,::String newText,bool restrict){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2010___replaceText)
HXLINE(2011)		bool _hx_tmp;
HXDLIN(2011)		bool _hx_tmp1;
HXDLIN(2011)		bool _hx_tmp2;
HXDLIN(2011)		if ((endIndex >= beginIndex)) {
HXLINE(2011)			_hx_tmp2 = (beginIndex < 0);
            		}
            		else {
HXLINE(2011)			_hx_tmp2 = true;
            		}
HXDLIN(2011)		if (!(_hx_tmp2)) {
HXLINE(2011)			_hx_tmp1 = (endIndex > this->_hx___text.length);
            		}
            		else {
HXLINE(2011)			_hx_tmp1 = true;
            		}
HXDLIN(2011)		if (!(_hx_tmp1)) {
HXLINE(2011)			_hx_tmp = ::hx::IsNull( newText );
            		}
            		else {
HXLINE(2011)			_hx_tmp = true;
            		}
HXDLIN(2011)		if (_hx_tmp) {
HXLINE(2011)			return;
            		}
HXLINE(2013)		if (restrict) {
HXLINE(2015)			newText = this->_hx___textEngine->restrictText(newText);
HXLINE(2017)			if ((this->_hx___textEngine->maxChars > 0)) {
HXLINE(2019)				int removeLength = (endIndex - beginIndex);
HXLINE(2020)				int maxLength = ((this->_hx___textEngine->maxChars - this->_hx___text.length) + removeLength);
HXLINE(2022)				if ((maxLength <= 0)) {
HXLINE(2024)					newText = HX_("",00,00,00,00);
            				}
            				else {
HXLINE(2026)					if ((maxLength < newText.length)) {
HXLINE(2028)						newText = newText.substr(0,maxLength);
            					}
            				}
            			}
            		}
HXLINE(2033)		::String _hx_tmp3 = (this->_hx___text.substring(0,beginIndex) + newText);
HXDLIN(2033)		this->_hx___updateText((_hx_tmp3 + this->_hx___text.substring(endIndex,null())));
HXLINE(2035)		int offset = (newText.length - (endIndex - beginIndex));
HXLINE(2037)		int i = 0;
HXLINE(2038)		 ::openfl::text::_internal::TextFormatRange range;
HXLINE(2040)		while((i < this->_hx___textEngine->textFormatRanges->get_length())){
HXLINE(2042)			range = this->_hx___textEngine->textFormatRanges->get(i).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(2044)			if ((beginIndex == endIndex)) {
HXLINE(2046)				if ((range->start == range->end)) {
HXLINE(2049)					if ((range->start != 0)) {
HXLINE(2051)						::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/TextField.hx",94,20,f0,cc),2051,HX_("openfl.text.TextField",ca,a8,d5,ef),HX_("__replaceText",e1,ab,0d,aa)));
            					}
            					else {
HXLINE(2055)						 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2055)						range1->end = (range1->end + offset);
            					}
            				}
            				else {
HXLINE(2058)					if ((range->end >= beginIndex)) {
HXLINE(2062)						if ((range->start >= beginIndex)) {
HXLINE(2065)							 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2065)							range1->start = (range1->start + offset);
HXLINE(2066)							 ::openfl::text::_internal::TextFormatRange range2 = range;
HXDLIN(2066)							range2->end = (range2->end + offset);
            						}
            						else {
HXLINE(2068)							bool _hx_tmp;
HXDLIN(2068)							if ((range->start < beginIndex)) {
HXLINE(2068)								_hx_tmp = (range->end >= endIndex);
            							}
            							else {
HXLINE(2068)								_hx_tmp = false;
            							}
HXDLIN(2068)							if (_hx_tmp) {
HXLINE(2072)								 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2072)								range1->end = (range1->end + offset);
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE(2077)				if ((range->end > beginIndex)) {
HXLINE(2081)					if ((range->start > endIndex)) {
HXLINE(2084)						 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2084)						range1->start = (range1->start + offset);
HXLINE(2085)						 ::openfl::text::_internal::TextFormatRange range2 = range;
HXDLIN(2085)						range2->end = (range2->end + offset);
            					}
            					else {
HXLINE(2087)						bool _hx_tmp;
HXDLIN(2087)						if ((range->start <= beginIndex)) {
HXLINE(2087)							_hx_tmp = (range->end > endIndex);
            						}
            						else {
HXLINE(2087)							_hx_tmp = false;
            						}
HXDLIN(2087)						if (_hx_tmp) {
HXLINE(2090)							 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2090)							range1->end = (range1->end + offset);
            						}
            						else {
HXLINE(2092)							bool _hx_tmp;
HXDLIN(2092)							if ((range->start >= beginIndex)) {
HXLINE(2092)								_hx_tmp = (range->end <= endIndex);
            							}
            							else {
HXLINE(2092)								_hx_tmp = false;
            							}
HXDLIN(2092)							if (_hx_tmp) {
HXLINE(2095)								i = (i - 1);
HXDLIN(2095)								this->_hx___textEngine->textFormatRanges->splice((i + 1),1);
            							}
            							else {
HXLINE(2097)								bool _hx_tmp;
HXDLIN(2097)								bool _hx_tmp1;
HXDLIN(2097)								if ((range->end > endIndex)) {
HXLINE(2097)									_hx_tmp1 = (range->start > beginIndex);
            								}
            								else {
HXLINE(2097)									_hx_tmp1 = false;
            								}
HXDLIN(2097)								if (_hx_tmp1) {
HXLINE(2097)									_hx_tmp = (range->start <= endIndex);
            								}
            								else {
HXLINE(2097)									_hx_tmp = false;
            								}
HXDLIN(2097)								if (_hx_tmp) {
HXLINE(2101)									range->start = beginIndex;
HXLINE(2102)									 ::openfl::text::_internal::TextFormatRange range1 = range;
HXDLIN(2102)									range1->end = (range1->end + offset);
            								}
            								else {
HXLINE(2104)									bool _hx_tmp;
HXDLIN(2104)									bool _hx_tmp1;
HXDLIN(2104)									if ((range->start < beginIndex)) {
HXLINE(2104)										_hx_tmp1 = (range->end > beginIndex);
            									}
            									else {
HXLINE(2104)										_hx_tmp1 = false;
            									}
HXDLIN(2104)									if (_hx_tmp1) {
HXLINE(2104)										_hx_tmp = (range->end <= endIndex);
            									}
            									else {
HXLINE(2104)										_hx_tmp = false;
            									}
HXDLIN(2104)									if (_hx_tmp) {
HXLINE(2107)										range->end = beginIndex;
            									}
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE(2111)			i = (i + 1);
            		}
HXLINE(2115)		if ((this->_hx___textEngine->textFormatRanges->get_length() == 0)) {
HXLINE(2118)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2118)			 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXDLIN(2118)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,0,newText.length));
            		}
            		else {
HXLINE(2120)			bool _hx_tmp;
HXDLIN(2120)			if ((beginIndex == endIndex)) {
HXLINE(2120)				_hx_tmp = (this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->start > 0);
            			}
            			else {
HXLINE(2120)				_hx_tmp = false;
            			}
HXDLIN(2120)			if (_hx_tmp) {
HXLINE(2123)				::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2123)				 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXDLIN(2123)				( ( ::openfl::_Vector::ObjectVector)(this1) )->unshift( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,0,this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->start));
            			}
            			else {
HXLINE(2125)				bool _hx_tmp;
HXDLIN(2125)				if ((beginIndex != endIndex)) {
HXLINE(2125)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2125)					 ::openfl::text::_internal::TextFormatRange _hx_tmp1 = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(2125)					_hx_tmp = (_hx_tmp1->end < this->_hx___text.length);
            				}
            				else {
HXLINE(2125)					_hx_tmp = false;
            				}
HXDLIN(2125)				if (_hx_tmp) {
HXLINE(2128)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2128)					 ::openfl::text::TextFormat value = this->get_defaultTextFormat()->clone();
HXLINE(2129)					::Dynamic this2 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2129)					 ::openfl::text::_internal::TextFormatRange value1 = ( ( ::openfl::_Vector::ObjectVector)(this2) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(2128)					( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,value,value1->end,this->_hx___text.length));
            				}
            			}
            		}
HXLINE(2132)		this->_hx___selectionIndex = (this->_hx___caretIndex = (beginIndex + newText.length));
HXLINE(2134)		this->_hx___dirty = true;
HXLINE(2135)		this->_hx___layoutDirty = true;
HXLINE(2136)		if (!(this->_hx___renderDirty)) {
HXLINE(2136)			this->_hx___renderDirty = true;
HXDLIN(2136)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextField_obj,_hx___replaceText,(void))

void TextField_obj::_hx___startCursorTimer(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2141___startCursorTimer)
HXDLIN(2141)		if (::hx::IsEq( this->get_type(),1 )) {
HXLINE(2143)			this->_hx___cursorTimer = ::haxe::Timer_obj::delay(this->_hx___startCursorTimer_dyn(),600);
HXLINE(2144)			this->_hx___showCursor = !(this->_hx___showCursor);
HXLINE(2145)			this->_hx___dirty = true;
HXLINE(2146)			if (!(this->_hx___renderDirty)) {
HXLINE(2146)				this->_hx___renderDirty = true;
HXDLIN(2146)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___startCursorTimer,(void))

void TextField_obj::_hx___startTextInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2151___startTextInput)
HXLINE(2152)		if ((this->_hx___caretIndex < 0)) {
HXLINE(2154)			this->_hx___caretIndex = this->_hx___text.length;
HXLINE(2155)			this->_hx___selectionIndex = this->_hx___caretIndex;
            		}
HXLINE(2158)		bool enableInput = true;
HXLINE(2160)		if (enableInput) {
HXLINE(2162)			this->_hx___enableInput();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___startTextInput,(void))

void TextField_obj::_hx___stopCursorTimer(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2167___stopCursorTimer)
HXLINE(2168)		if (::hx::IsNotNull( this->_hx___cursorTimer )) {
HXLINE(2170)			this->_hx___cursorTimer->stop();
HXLINE(2171)			this->_hx___cursorTimer = null();
            		}
HXLINE(2174)		if (this->_hx___showCursor) {
HXLINE(2176)			this->_hx___showCursor = false;
HXLINE(2177)			this->_hx___dirty = true;
HXLINE(2178)			if (!(this->_hx___renderDirty)) {
HXLINE(2178)				this->_hx___renderDirty = true;
HXDLIN(2178)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___stopCursorTimer,(void))

void TextField_obj::_hx___stopTextInput(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2183___stopTextInput)
HXLINE(2184)		bool disableInput = true;
HXLINE(2186)		if (disableInput) {
HXLINE(2188)			this->_hx___disableInput();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___stopTextInput,(void))

void TextField_obj::_hx___updateLayout(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2194___updateLayout)
HXDLIN(2194)		if (this->_hx___layoutDirty) {
HXLINE(2196)			Float cacheWidth = this->_hx___textEngine->width;
HXLINE(2197)			this->_hx___textEngine->update();
HXLINE(2199)			if (::hx::IsNotEq( this->_hx___textEngine->autoSize,2 )) {
HXLINE(2201)				if ((this->_hx___textEngine->width != cacheWidth)) {
HXLINE(2203)					 ::Dynamic _hx_switch_0 = this->_hx___textEngine->autoSize;
            					if (  (_hx_switch_0==0) ){
HXLINE(2209)						Float _hx_tmp = this->get_x();
HXDLIN(2209)						this->set_x((_hx_tmp + ((cacheWidth - this->_hx___textEngine->width) / ( (Float)(2) ))));
HXDLIN(2209)						goto _hx_goto_66;
            					}
            					if (  (_hx_switch_0==3) ){
HXLINE(2206)						Float _hx_tmp = this->get_x();
HXDLIN(2206)						this->set_x((_hx_tmp + (cacheWidth - this->_hx___textEngine->width)));
HXDLIN(2206)						goto _hx_goto_66;
            					}
            					/* default */{
            					}
            					_hx_goto_66:;
            				}
HXLINE(2215)				this->_hx___textEngine->getBounds();
            			}
HXLINE(2218)			this->_hx___layoutDirty = false;
HXLINE(2220)			this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateLayout,(void))

void TextField_obj::_hx___updateScrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2225___updateScrollH)
HXLINE(2226)		this->_hx___updateLayout();
HXLINE(2228)		Float _hx_tmp = this->get_textWidth();
HXDLIN(2228)		if ((_hx_tmp <= (this->get_width() - ( (Float)(4) )))) {
HXLINE(2230)			this->set_scrollH(0);
HXLINE(2231)			return;
            		}
HXLINE(2234)		int tempScrollH = this->get_scrollH();
HXLINE(2238)		bool _hx_tmp1;
HXDLIN(2238)		if ((this->_hx___caretIndex != 0)) {
HXLINE(2238)			int _hx_tmp = this->getLineOffset(this->getLineIndexOfChar(this->_hx___caretIndex));
HXDLIN(2238)			_hx_tmp1 = (_hx_tmp == this->_hx___caretIndex);
            		}
            		else {
HXLINE(2238)			_hx_tmp1 = true;
            		}
HXDLIN(2238)		if (_hx_tmp1) {
HXLINE(2241)			tempScrollH = 0;
            		}
            		else {
HXLINE(2245)			 ::openfl::geom::Rectangle caret = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(2246)			bool written = false;
HXLINE(2248)			if ((this->_hx___caretIndex < this->_hx___text.length)) {
HXLINE(2250)				written = this->_hx___getCharBoundaries(this->_hx___caretIndex,caret);
            			}
HXLINE(2252)			if (!(written)) {
HXLINE(2256)				this->_hx___getCharBoundaries((this->_hx___caretIndex - 1),caret);
HXLINE(2257)				 ::openfl::geom::Rectangle caret1 = caret;
HXDLIN(2257)				caret1->x = (caret1->x + caret->width);
            			}
HXLINE(2260)			while(true){
HXLINE(2260)				bool _hx_tmp;
HXDLIN(2260)				if ((caret->x < tempScrollH)) {
HXLINE(2260)					_hx_tmp = (tempScrollH > 0);
            				}
            				else {
HXLINE(2260)					_hx_tmp = false;
            				}
HXDLIN(2260)				if (!(_hx_tmp)) {
HXLINE(2260)					goto _hx_goto_68;
            				}
HXLINE(2262)				tempScrollH = (tempScrollH - 24);
            			}
            			_hx_goto_68:;
HXLINE(2264)			while(true){
HXLINE(2264)				Float caret1 = caret->x;
HXDLIN(2264)				if (!((caret1 > ((tempScrollH + this->get_width()) - ( (Float)(4) ))))) {
HXLINE(2264)					goto _hx_goto_69;
            				}
HXLINE(2266)				tempScrollH = (tempScrollH + 24);
            			}
            			_hx_goto_69:;
HXLINE(2269)			::openfl::geom::Rectangle_obj::_hx___pool->release(caret);
            		}
HXLINE(2272)		bool _hx_tmp2;
HXDLIN(2272)		if ((tempScrollH > 0)) {
HXLINE(2272)			_hx_tmp2 = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXLINE(2272)			_hx_tmp2 = false;
            		}
HXDLIN(2272)		if (_hx_tmp2) {
HXLINE(2275)			int lineLength = this->getLineLength(this->getLineIndexOfChar(this->_hx___caretIndex));
HXLINE(2276)			int _hx_tmp = this->get_scrollH();
HXDLIN(2276)			if ((((_hx_tmp + this->get_width()) - ( (Float)(4) )) > lineLength)) {
HXLINE(2278)				this->set_scrollH(::Math_obj::ceil(((( (Float)(lineLength) ) - this->get_width()) + 4)));
            			}
            		}
HXLINE(2282)		if ((tempScrollH < 0)) {
HXLINE(2284)			this->set_scrollH(0);
            		}
            		else {
HXLINE(2286)			if ((tempScrollH > this->get_maxScrollH())) {
HXLINE(2288)				this->set_scrollH(this->get_maxScrollH());
            			}
            			else {
HXLINE(2292)				this->set_scrollH(tempScrollH);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateScrollH,(void))

void TextField_obj::_hx___updateScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2299___updateScrollV)
HXLINE(2300)		this->_hx___updateLayout();
HXLINE(2302)		Float _hx_tmp = this->get_textHeight();
HXDLIN(2302)		if ((_hx_tmp <= (this->get_height() - ( (Float)(4) )))) {
HXLINE(2304)			this->set_scrollV(1);
HXLINE(2305)			return;
            		}
HXLINE(2308)		int lineIndex = this->getLineIndexOfChar(this->_hx___caretIndex);
HXLINE(2310)		bool _hx_tmp1;
HXDLIN(2310)		if ((lineIndex == -1)) {
HXLINE(2310)			_hx_tmp1 = (this->_hx___caretIndex > 0);
            		}
            		else {
HXLINE(2310)			_hx_tmp1 = false;
            		}
HXDLIN(2310)		if (_hx_tmp1) {
HXLINE(2313)			lineIndex = (this->getLineIndexOfChar((this->_hx___caretIndex - 1)) + 1);
            		}
HXLINE(2316)		if (((lineIndex + 1) < this->get_scrollV())) {
HXLINE(2318)			this->set_scrollV((lineIndex + 1));
            		}
            		else {
HXLINE(2320)			if (((lineIndex + 1) > this->get_bottomScrollV())) {
HXLINE(2322)				int i = lineIndex;
HXDLIN(2322)				Float tempHeight = ((Float)0.0);
HXLINE(2324)				while((i >= 0)){
HXLINE(2326)					Float _hx_tmp = (tempHeight + this->_hx___textEngine->lineHeights->get(i));
HXDLIN(2326)					if ((_hx_tmp <= (this->get_height() - ( (Float)(4) )))) {
HXLINE(2328)						tempHeight = (tempHeight + this->_hx___textEngine->lineHeights->get(i));
HXLINE(2329)						i = (i - 1);
            					}
            					else {
HXLINE(2332)						goto _hx_goto_71;
            					}
            				}
            				_hx_goto_71:;
HXLINE(2335)				this->set_scrollV((i + 2));
            			}
            			else {
HXLINE(2340)				this->set_scrollV(this->get_scrollV());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateScrollV,(void))

void TextField_obj::_hx___updateMouseDrag(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2345___updateMouseDrag)
HXLINE(2346)		Float _hx_tmp = this->get_mouseX();
HXDLIN(2346)		if ((_hx_tmp > (this->get_width() - ( (Float)(1) )))) {
HXLINE(2348)			int _hx_tmp = this->get_scrollH();
HXDLIN(2348)			Float _hx_tmp1 = this->get_mouseX();
HXDLIN(2348)			this->set_scrollH((_hx_tmp + ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min(((_hx_tmp1 - this->get_width()) * ((Float).1)),( (Float)(10) )),( (Float)(1) )))));
            		}
            		else {
HXLINE(2350)			if ((this->get_mouseX() < 1)) {
HXLINE(2352)				int _hx_tmp = this->get_scrollH();
HXDLIN(2352)				this->set_scrollH((_hx_tmp - ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min((this->get_mouseX() * ((Float)-.1)),( (Float)(10) )),( (Float)(1) )))));
            			}
            		}
HXLINE(2355)		this->_hx___mouseScrollVCounter++;
HXLINE(2357)		int _hx_tmp1 = this->_hx___mouseScrollVCounter;
HXDLIN(2357)		if ((_hx_tmp1 > (this->stage->get_frameRate() / ( (Float)(10) )))) {
HXLINE(2359)			Float _hx_tmp = this->get_mouseY();
HXDLIN(2359)			if ((_hx_tmp > (this->get_height() - ( (Float)(2) )))) {
HXLINE(2361)				int _hx_tmp = this->get_scrollV();
HXDLIN(2361)				Float _hx_tmp1 = this->get_mouseY();
HXDLIN(2361)				this->set_scrollV((_hx_tmp + ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min(((_hx_tmp1 - this->get_height()) * ((Float).03)),( (Float)(5) )),( (Float)(1) )))));
            			}
            			else {
HXLINE(2363)				if ((this->get_mouseY() < 2)) {
HXLINE(2365)					int _hx_tmp = this->get_scrollV();
HXDLIN(2365)					this->set_scrollV((_hx_tmp - ::Std_obj::_hx_int(::Math_obj::max(::Math_obj::min((this->get_mouseY() * ((Float)-.03)),( (Float)(5) )),( (Float)(1) )))));
            				}
            			}
HXLINE(2367)			this->_hx___mouseScrollVCounter = 0;
            		}
HXLINE(2369)		this->stage_onMouseMove(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_hx___updateMouseDrag,(void))

void TextField_obj::_hx___updateText(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2373___updateText)
HXLINE(2383)		this->_hx___textEngine->set_text(value);
HXLINE(2384)		this->_hx___text = this->_hx___textEngine->text;
HXLINE(2386)		if ((this->_hx___text.length < this->_hx___caretIndex)) {
HXLINE(2388)			this->_hx___selectionIndex = (this->_hx___caretIndex = this->_hx___text.length);
            		}
HXLINE(2391)		if (!(this->_hx___displayAsPassword)) {
HXLINE(2393)			this->_hx___textEngine->set_text(this->_hx___text);
            		}
            		else {
HXLINE(2397)			int length = this->get_text().length;
HXLINE(2398)			::String mask = HX_("",00,00,00,00);
HXLINE(2400)			{
HXLINE(2400)				int _g = 0;
HXDLIN(2400)				int _g1 = length;
HXDLIN(2400)				while((_g < _g1)){
HXLINE(2400)					_g = (_g + 1);
HXDLIN(2400)					int i = (_g - 1);
HXLINE(2402)					mask = (mask + HX_("*",2a,00,00,00));
            				}
            			}
HXLINE(2405)			this->_hx___textEngine->set_text(mask);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_hx___updateText,(void))

void TextField_obj::_hx___updateTransforms( ::openfl::geom::Matrix overrideTransform){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2410___updateTransforms)
HXLINE(2411)		this->super::_hx___updateTransforms(overrideTransform);
HXLINE(2412)		{
HXLINE(2412)			 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(2412)			Float px = this->_hx___offsetX;
HXDLIN(2412)			Float py = this->_hx___offsetY;
HXDLIN(2412)			_this->tx = (((px * _this->a) + (py * _this->c)) + _this->tx);
HXDLIN(2412)			_this->ty = (((px * _this->b) + (py * _this->d)) + _this->ty);
            		}
            	}


 ::Dynamic TextField_obj::get_antiAliasType(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2418_get_antiAliasType)
HXDLIN(2418)		return this->_hx___textEngine->antiAliasType;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

 ::Dynamic TextField_obj::set_antiAliasType( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2422_set_antiAliasType)
HXLINE(2423)		bool _hx_tmp = ::hx::IsNotEq( value,this->_hx___textEngine->antiAliasType );
HXLINE(2428)		return (this->_hx___textEngine->antiAliasType = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

 ::Dynamic TextField_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2433_get_autoSize)
HXDLIN(2433)		return this->_hx___textEngine->autoSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

 ::Dynamic TextField_obj::set_autoSize( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2437_set_autoSize)
HXLINE(2438)		if (::hx::IsNotEq( value,this->_hx___textEngine->autoSize )) {
HXLINE(2440)			this->_hx___dirty = true;
HXLINE(2441)			this->_hx___layoutDirty = true;
HXLINE(2442)			if (!(this->_hx___renderDirty)) {
HXLINE(2442)				this->_hx___renderDirty = true;
HXDLIN(2442)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2445)		return (this->_hx___textEngine->autoSize = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2450_get_background)
HXDLIN(2450)		return this->_hx___textEngine->background;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2454_set_background)
HXLINE(2455)		if ((value != this->_hx___textEngine->background)) {
HXLINE(2457)			this->_hx___dirty = true;
HXLINE(2458)			if (!(this->_hx___renderDirty)) {
HXLINE(2458)				this->_hx___renderDirty = true;
HXDLIN(2458)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2461)		return (this->_hx___textEngine->background = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2466_get_backgroundColor)
HXDLIN(2466)		return this->_hx___textEngine->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2470_set_backgroundColor)
HXLINE(2471)		if ((value != this->_hx___textEngine->backgroundColor)) {
HXLINE(2473)			this->_hx___dirty = true;
HXLINE(2474)			if (!(this->_hx___renderDirty)) {
HXLINE(2474)				this->_hx___renderDirty = true;
HXDLIN(2474)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2477)		return (this->_hx___textEngine->backgroundColor = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2482_get_border)
HXDLIN(2482)		return this->_hx___textEngine->border;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2486_set_border)
HXLINE(2487)		if ((value != this->_hx___textEngine->border)) {
HXLINE(2489)			this->_hx___dirty = true;
HXLINE(2490)			if (!(this->_hx___renderDirty)) {
HXLINE(2490)				this->_hx___renderDirty = true;
HXDLIN(2490)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2493)		return (this->_hx___textEngine->border = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2498_get_borderColor)
HXDLIN(2498)		return this->_hx___textEngine->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2502_set_borderColor)
HXLINE(2503)		if ((value != this->_hx___textEngine->borderColor)) {
HXLINE(2505)			this->_hx___dirty = true;
HXLINE(2506)			if (!(this->_hx___renderDirty)) {
HXLINE(2506)				this->_hx___renderDirty = true;
HXDLIN(2506)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2509)		return (this->_hx___textEngine->borderColor = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2513_get_bottomScrollV)
HXLINE(2514)		this->_hx___updateLayout();
HXLINE(2516)		return this->_hx___textEngine->get_bottomScrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2521_get_caretIndex)
HXDLIN(2521)		return this->_hx___caretIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

 ::openfl::text::TextFormat TextField_obj::get_defaultTextFormat(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2526_get_defaultTextFormat)
HXDLIN(2526)		return this->_hx___textFormat->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

 ::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2530_set_defaultTextFormat)
HXLINE(2531)		this->_hx___textFormat->_hx___merge(value);
HXLINE(2533)		this->_hx___layoutDirty = true;
HXLINE(2534)		this->_hx___dirty = true;
HXLINE(2535)		if (!(this->_hx___renderDirty)) {
HXLINE(2535)			this->_hx___renderDirty = true;
HXDLIN(2535)			this->_hx___setParentRenderDirty();
            		}
HXLINE(2537)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2542_get_displayAsPassword)
HXDLIN(2542)		return this->_hx___displayAsPassword;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2546_set_displayAsPassword)
HXLINE(2547)		if ((value != this->_hx___displayAsPassword)) {
HXLINE(2549)			this->_hx___dirty = true;
HXLINE(2550)			this->_hx___layoutDirty = true;
HXLINE(2551)			if (!(this->_hx___renderDirty)) {
HXLINE(2551)				this->_hx___renderDirty = true;
HXDLIN(2551)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2553)			this->_hx___displayAsPassword = value;
HXLINE(2554)			this->_hx___updateText(this->_hx___text);
            		}
HXLINE(2557)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2562_get_embedFonts)
HXDLIN(2562)		return this->_hx___textEngine->embedFonts;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2574_set_embedFonts)
HXDLIN(2574)		return (this->_hx___textEngine->embedFonts = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

 ::Dynamic TextField_obj::get_gridFitType(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2579_get_gridFitType)
HXDLIN(2579)		return this->_hx___textEngine->gridFitType;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

 ::Dynamic TextField_obj::set_gridFitType( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2591_set_gridFitType)
HXDLIN(2591)		return (this->_hx___textEngine->gridFitType = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2595_get_height)
HXLINE(2596)		this->_hx___updateLayout();
HXLINE(2597)		Float _hx_tmp = this->_hx___textEngine->height;
HXDLIN(2597)		return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            	}


Float TextField_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2601_set_height)
HXLINE(2602)		if ((value != this->_hx___textEngine->height)) {
HXLINE(2604)			this->_hx___setTransformDirty();
HXLINE(2605)			this->_hx___dirty = true;
HXLINE(2606)			this->_hx___layoutDirty = true;
HXLINE(2607)			if (!(this->_hx___renderDirty)) {
HXLINE(2607)				this->_hx___renderDirty = true;
HXDLIN(2607)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2609)			this->_hx___textEngine->height = value;
            		}
HXLINE(2612)		Float _hx_tmp = this->_hx___textEngine->height;
HXDLIN(2612)		return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            	}


::String TextField_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2620_get_htmlText)
HXDLIN(2620)		return this->_hx___text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2625_set_htmlText)
HXLINE(2626)		bool _hx_tmp;
HXDLIN(2626)		if (this->_hx___isHTML) {
HXLINE(2626)			_hx_tmp = (this->_hx___text != value);
            		}
            		else {
HXLINE(2626)			_hx_tmp = true;
            		}
HXDLIN(2626)		if (_hx_tmp) {
HXLINE(2628)			this->_hx___dirty = true;
HXLINE(2629)			this->_hx___layoutDirty = true;
HXLINE(2630)			if (!(this->_hx___renderDirty)) {
HXLINE(2630)				this->_hx___renderDirty = true;
HXDLIN(2630)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2633)		this->_hx___isHTML = true;
HXLINE(2639)		value = ::openfl::text::_internal::HTMLParser_obj::parse(value,this->_hx___textFormat,this->_hx___textEngine->textFormatRanges);
HXLINE(2669)		this->_hx___updateText(value);
HXLINE(2671)		this->_hx___selectionIndex = (this->_hx___caretIndex = this->get_length());
HXLINE(2673)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2677_get_length)
HXLINE(2678)		if (::hx::IsNotNull( this->_hx___text )) {
HXLINE(2680)			return this->_hx___text.length;
            		}
HXLINE(2683)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2688_get_maxChars)
HXDLIN(2688)		return this->_hx___textEngine->maxChars;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2692_set_maxChars)
HXLINE(2693)		if ((value != this->_hx___textEngine->maxChars)) {
HXLINE(2695)			this->_hx___textEngine->maxChars = value;
HXLINE(2697)			this->_hx___dirty = true;
HXLINE(2698)			this->_hx___layoutDirty = true;
HXLINE(2699)			if (!(this->_hx___renderDirty)) {
HXLINE(2699)				this->_hx___renderDirty = true;
HXDLIN(2699)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2702)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2706_get_maxScrollH)
HXLINE(2707)		this->_hx___updateLayout();
HXLINE(2709)		return this->_hx___textEngine->maxScrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2713_get_maxScrollV)
HXLINE(2714)		this->_hx___updateLayout();
HXLINE(2716)		return this->_hx___textEngine->get_maxScrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_mouseWheelEnabled(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2721_get_mouseWheelEnabled)
HXDLIN(2721)		return this->_hx___mouseWheelEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_mouseWheelEnabled,return )

bool TextField_obj::set_mouseWheelEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2726_set_mouseWheelEnabled)
HXDLIN(2726)		return (this->_hx___mouseWheelEnabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_mouseWheelEnabled,return )

bool TextField_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2731_get_multiline)
HXDLIN(2731)		return this->_hx___textEngine->multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2735_set_multiline)
HXLINE(2736)		if ((value != this->_hx___textEngine->multiline)) {
HXLINE(2738)			this->_hx___dirty = true;
HXLINE(2739)			this->_hx___layoutDirty = true;
HXLINE(2740)			this->_hx___updateText(this->_hx___text);
HXLINE(2742)			this->_hx___updateScrollH();
HXLINE(2743)			if (!(this->_hx___renderDirty)) {
HXLINE(2743)				this->_hx___renderDirty = true;
HXDLIN(2743)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2746)		return (this->_hx___textEngine->multiline = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2750_get_numLines)
HXLINE(2751)		this->_hx___updateLayout();
HXLINE(2753)		return this->_hx___textEngine->numLines;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2758_get_restrict)
HXDLIN(2758)		return this->_hx___textEngine->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2762_set_restrict)
HXLINE(2763)		if ((this->_hx___textEngine->restrict != value)) {
HXLINE(2765)			this->_hx___textEngine->set_restrict(value);
HXLINE(2766)			this->_hx___updateText(this->_hx___text);
            		}
HXLINE(2769)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2774_get_scrollH)
HXDLIN(2774)		return this->_hx___textEngine->scrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2778_set_scrollH)
HXLINE(2779)		this->_hx___updateLayout();
HXLINE(2781)		if ((value > this->_hx___textEngine->maxScrollH)) {
HXLINE(2781)			value = this->_hx___textEngine->maxScrollH;
            		}
HXLINE(2782)		if ((value < 0)) {
HXLINE(2782)			value = 0;
            		}
HXLINE(2784)		if ((value != this->_hx___textEngine->scrollH)) {
HXLINE(2786)			this->_hx___dirty = true;
HXLINE(2787)			if (!(this->_hx___renderDirty)) {
HXLINE(2787)				this->_hx___renderDirty = true;
HXDLIN(2787)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2788)			this->_hx___textEngine->scrollH = value;
HXLINE(2789)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("scroll",0d,d8,64,47),null(),null()));
            		}
HXLINE(2792)		return this->_hx___textEngine->scrollH;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2797_get_scrollV)
HXDLIN(2797)		return this->_hx___textEngine->get_scrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_2801_set_scrollV)
HXLINE(2802)		this->_hx___updateLayout();
HXLINE(2804)		bool _hx_tmp;
HXDLIN(2804)		if ((value > 0)) {
HXLINE(2804)			_hx_tmp = (value != this->_hx___textEngine->get_scrollV());
            		}
            		else {
HXLINE(2804)			_hx_tmp = false;
            		}
HXDLIN(2804)		if (_hx_tmp) {
HXLINE(2806)			this->_hx___dirty = true;
HXLINE(2807)			if (!(this->_hx___renderDirty)) {
HXLINE(2807)				this->_hx___renderDirty = true;
HXDLIN(2807)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2808)			this->_hx___textEngine->set_scrollV(value);
HXLINE(2809)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("scroll",0d,d8,64,47),null(),null()));
            		}
HXLINE(2812)		return this->_hx___textEngine->get_scrollV();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2817_get_selectable)
HXDLIN(2817)		return this->_hx___textEngine->selectable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2821_set_selectable)
HXLINE(2822)		bool _hx_tmp;
HXDLIN(2822)		if ((value != this->_hx___textEngine->selectable)) {
HXLINE(2822)			_hx_tmp = ::hx::IsEq( this->get_type(),1 );
            		}
            		else {
HXLINE(2822)			_hx_tmp = false;
            		}
HXDLIN(2822)		if (_hx_tmp) {
HXLINE(2824)			bool _hx_tmp;
HXDLIN(2824)			if (::hx::IsNotNull( this->stage )) {
HXLINE(2824)				_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE(2824)				_hx_tmp = false;
            			}
HXDLIN(2824)			if (_hx_tmp) {
HXLINE(2826)				this->_hx___startTextInput();
            			}
            			else {
HXLINE(2828)				if (!(value)) {
HXLINE(2830)					this->_hx___stopTextInput();
            				}
            			}
            		}
HXLINE(2834)		return (this->_hx___textEngine->selectable = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2839_get_selectionBeginIndex)
HXDLIN(2839)		return ::Std_obj::_hx_int(::Math_obj::min(( (Float)(this->_hx___caretIndex) ),( (Float)(this->_hx___selectionIndex) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2844_get_selectionEndIndex)
HXDLIN(2844)		return ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_hx___caretIndex) ),( (Float)(this->_hx___selectionIndex) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2849_get_sharpness)
HXDLIN(2849)		return this->_hx___textEngine->sharpness;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2853_set_sharpness)
HXLINE(2854)		if ((value != this->_hx___textEngine->sharpness)) {
HXLINE(2856)			this->_hx___dirty = true;
HXLINE(2857)			if (!(this->_hx___renderDirty)) {
HXLINE(2857)				this->_hx___renderDirty = true;
HXDLIN(2857)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2860)		return (this->_hx___textEngine->sharpness = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

bool TextField_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2865_get_tabEnabled)
HXDLIN(2865)		if (::hx::IsNull( this->_hx___tabEnabled )) {
HXDLIN(2865)			return ::hx::IsEq( this->_hx___textEngine->type,1 );
            		}
            		else {
HXDLIN(2865)			return ( (bool)(this->_hx___tabEnabled) );
            		}
HXDLIN(2865)		return false;
            	}


::String TextField_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2870_get_text)
HXDLIN(2870)		return this->_hx___text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2874_set_text)
HXLINE(2875)		bool _hx_tmp;
HXDLIN(2875)		if (!(this->_hx___isHTML)) {
HXLINE(2875)			_hx_tmp = (this->_hx___text != value);
            		}
            		else {
HXLINE(2875)			_hx_tmp = true;
            		}
HXDLIN(2875)		if (_hx_tmp) {
HXLINE(2877)			this->_hx___dirty = true;
HXLINE(2878)			this->_hx___layoutDirty = true;
HXLINE(2879)			if (!(this->_hx___renderDirty)) {
HXLINE(2879)				this->_hx___renderDirty = true;
HXDLIN(2879)				this->_hx___setParentRenderDirty();
            			}
            		}
            		else {
HXLINE(2883)			return value;
            		}
HXLINE(2886)		if ((this->_hx___textEngine->textFormatRanges->get_length() > 1)) {
HXLINE(2888)			::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(2888)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(1,(this->_hx___textEngine->textFormatRanges->get_length() - 1));
            		}
HXLINE(2891)		::String utfValue = value;
HXLINE(2892)		 ::openfl::text::_internal::TextFormatRange range = this->_hx___textEngine->textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(2893)		range->format = this->_hx___textFormat;
HXLINE(2894)		range->start = 0;
HXLINE(2895)		range->end = utfValue.length;
HXLINE(2897)		this->_hx___isHTML = false;
HXLINE(2899)		this->_hx___updateText(value);
HXLINE(2900)		this->_hx___selectionIndex = (this->_hx___caretIndex = 0);
HXLINE(2902)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2907_get_textColor)
HXDLIN(2907)		return ( (int)(this->_hx___textFormat->color) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor(int value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2911_set_textColor)
HXLINE(2912)		if (::hx::IsNotEq( value,this->_hx___textFormat->color )) {
HXLINE(2914)			this->_hx___dirty = true;
HXLINE(2915)			if (!(this->_hx___renderDirty)) {
HXLINE(2915)				this->_hx___renderDirty = true;
HXDLIN(2915)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2918)		{
HXLINE(2918)			 ::Dynamic range = this->_hx___textEngine->textFormatRanges->iterator();
HXDLIN(2918)			while(( (bool)(range->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(2918)				 ::openfl::text::_internal::TextFormatRange range1 = ( ( ::openfl::text::_internal::TextFormatRange)(range->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(2920)				range1->format->color = value;
            			}
            		}
HXLINE(2923)		return ( (int)((this->_hx___textFormat->color = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2927_get_textWidth)
HXLINE(2928)		this->_hx___updateLayout();
HXLINE(2929)		return this->_hx___textEngine->textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2933_get_textHeight)
HXLINE(2934)		this->_hx___updateLayout();
HXLINE(2935)		return this->_hx___textEngine->textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

 ::Dynamic TextField_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2940_get_type)
HXDLIN(2940)		return this->_hx___textEngine->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

 ::Dynamic TextField_obj::set_type( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2944_set_type)
HXLINE(2945)		if (::hx::IsNotEq( value,this->_hx___textEngine->type )) {
HXLINE(2947)			if (::hx::IsEq( value,1 )) {
HXLINE(2949)				this->addEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null(),null(),null());
HXLINE(2951)				this->this_onFocusIn(null());
HXLINE(2952)				this->_hx___textEngine->_hx___useIntAdvances = true;
            			}
            			else {
HXLINE(2956)				this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null());
HXLINE(2958)				this->_hx___stopTextInput();
HXLINE(2959)				this->_hx___textEngine->_hx___useIntAdvances = null();
            			}
HXLINE(2962)			this->_hx___dirty = true;
HXLINE(2963)			this->_hx___layoutDirty = true;
HXLINE(2964)			if (!(this->_hx___renderDirty)) {
HXLINE(2964)				this->_hx___renderDirty = true;
HXDLIN(2964)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2967)		return (this->_hx___textEngine->type = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2971_get_width)
HXLINE(2972)		this->_hx___updateLayout();
HXLINE(2973)		return (this->_hx___textEngine->width * ::Math_obj::abs(this->_hx___scaleX));
            	}


Float TextField_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2977_set_width)
HXLINE(2978)		if ((value != this->_hx___textEngine->width)) {
HXLINE(2980)			this->_hx___setTransformDirty();
HXLINE(2981)			this->_hx___dirty = true;
HXLINE(2982)			this->_hx___layoutDirty = true;
HXLINE(2983)			if (!(this->_hx___renderDirty)) {
HXLINE(2983)				this->_hx___renderDirty = true;
HXDLIN(2983)				this->_hx___setParentRenderDirty();
            			}
HXLINE(2985)			this->_hx___textEngine->width = value;
            		}
HXLINE(2988)		return (this->_hx___textEngine->width * ::Math_obj::abs(this->_hx___scaleX));
            	}


bool TextField_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2993_get_wordWrap)
HXDLIN(2993)		return this->_hx___textEngine->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_2997_set_wordWrap)
HXLINE(2998)		if ((value != this->_hx___textEngine->wordWrap)) {
HXLINE(3000)			this->_hx___dirty = true;
HXLINE(3001)			this->_hx___layoutDirty = true;
HXLINE(3002)			if (!(this->_hx___renderDirty)) {
HXLINE(3002)				this->_hx___renderDirty = true;
HXDLIN(3002)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3005)		return (this->_hx___textEngine->wordWrap = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Float TextField_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3010_get_x)
HXDLIN(3010)		return (this->_hx___transform->tx + this->_hx___offsetX);
            	}


Float TextField_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3014_set_x)
HXLINE(3015)		if ((value != (this->_hx___transform->tx + this->_hx___offsetX))) {
HXLINE(3015)			this->_hx___setTransformDirty();
            		}
HXLINE(3016)		return (this->_hx___transform->tx = (value - this->_hx___offsetX));
            	}


Float TextField_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3021_get_y)
HXDLIN(3021)		return (this->_hx___transform->ty + this->_hx___offsetY);
            	}


Float TextField_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3025_set_y)
HXLINE(3026)		if ((value != (this->_hx___transform->ty + this->_hx___offsetY))) {
HXLINE(3026)			this->_hx___setTransformDirty();
            		}
HXLINE(3027)		return (this->_hx___transform->ty = (value - this->_hx___offsetY));
            	}


void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3032_stage_onMouseMove)
HXLINE(3033)		if (::hx::IsNull( this->stage )) {
HXLINE(3033)			return;
            		}
HXLINE(3035)		bool _hx_tmp;
HXDLIN(3035)		if (this->get_selectable()) {
HXLINE(3035)			_hx_tmp = (this->_hx___selectionIndex >= 0);
            		}
            		else {
HXLINE(3035)			_hx_tmp = false;
            		}
HXDLIN(3035)		if (_hx_tmp) {
HXLINE(3037)			this->_hx___updateLayout();
HXLINE(3039)			Float position = this->get_mouseX();
HXDLIN(3039)			Float position1 = (position + this->get_scrollH());
HXDLIN(3039)			int position2 = this->_hx___getPosition(position1,this->get_mouseY());
HXLINE(3041)			if ((position2 != this->_hx___caretIndex)) {
HXLINE(3043)				this->_hx___caretIndex = position2;
HXLINE(3045)				bool setDirty = true;
HXLINE(3058)				if (setDirty) {
HXLINE(3060)					this->_hx___dirty = true;
HXLINE(3061)					if (!(this->_hx___renderDirty)) {
HXLINE(3061)						this->_hx___renderDirty = true;
HXDLIN(3061)						this->_hx___setParentRenderDirty();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3068_stage_onMouseUp)
HXLINE(3069)		if (::hx::IsNull( this->stage )) {
HXLINE(3069)			return;
            		}
HXLINE(3071)		this->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
HXLINE(3072)		this->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_onMouseMove_dyn(),null());
HXLINE(3073)		this->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_onMouseUp_dyn(),null());
HXLINE(3075)		if (::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(3077)			this->_hx___getWorldTransform();
HXLINE(3078)			this->_hx___updateLayout();
HXLINE(3080)			Float upPos = this->get_mouseX();
HXDLIN(3080)			Float upPos1 = (upPos + this->get_scrollH());
HXDLIN(3080)			int upPos2 = this->_hx___getPosition(upPos1,this->get_mouseY());
HXLINE(3081)			int leftPos = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(this->_hx___selectionIndex) ),( (Float)(upPos2) )));
HXLINE(3082)			int rightPos = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_hx___selectionIndex) ),( (Float)(upPos2) )));
HXLINE(3087)			this->_hx___selectionIndex = leftPos;
HXLINE(3088)			this->_hx___caretIndex = rightPos;
HXLINE(3090)			if (this->_hx___inputEnabled) {
HXLINE(3092)				this->this_onFocusIn(null());
HXLINE(3094)				this->_hx___stopCursorTimer();
HXLINE(3095)				this->_hx___startCursorTimer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3109_this_onAddedToStage)
HXDLIN(3109)		this->this_onFocusIn(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

void TextField_obj::this_onEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3114_this_onEnterFrame)
HXDLIN(3114)		this->_hx___updateMouseDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onEnterFrame,(void))

void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3120_this_onFocusIn)
HXDLIN(3120)		bool _hx_tmp;
HXDLIN(3120)		bool _hx_tmp1;
HXDLIN(3120)		if (::hx::IsEq( this->get_type(),1 )) {
HXDLIN(3120)			_hx_tmp1 = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXDLIN(3120)			_hx_tmp1 = false;
            		}
HXDLIN(3120)		if (_hx_tmp1) {
HXDLIN(3120)			_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN(3120)			_hx_tmp = false;
            		}
HXDLIN(3120)		if (_hx_tmp) {
HXLINE(3122)			this->_hx___startTextInput();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3127_this_onFocusOut)
HXLINE(3128)		this->_hx___stopCursorTimer();
HXLINE(3132)		bool _hx_tmp;
HXDLIN(3132)		if (::hx::IsNotNull( event->relatedObject )) {
HXLINE(3132)			_hx_tmp = !(::Std_obj::isOfType(event->relatedObject,::hx::ClassOf< ::openfl::text::TextField >()));
            		}
            		else {
HXLINE(3132)			_hx_tmp = true;
            		}
HXDLIN(3132)		if (_hx_tmp) {
HXLINE(3134)			this->_hx___stopTextInput();
            		}
            		else {
HXLINE(3138)			if (::hx::IsNotNull( this->stage )) {
HXLINE(3141)				this->stage->window->onTextInput->remove(this->window_onTextInput_dyn());
HXLINE(3142)				this->stage->window->onKeyDown->remove(this->window_onKeyDown_dyn());
            			}
HXLINE(3146)			this->_hx___inputEnabled = false;
            		}
HXLINE(3149)		if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3151)			this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3152)			this->_hx___dirty = true;
HXLINE(3153)			if (!(this->_hx___renderDirty)) {
HXLINE(3153)				this->_hx___renderDirty = true;
HXDLIN(3153)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

void TextField_obj::this_onKeyDown( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3160_this_onKeyDown)
HXDLIN(3160)		bool _hx_tmp;
HXDLIN(3160)		bool _hx_tmp1;
HXDLIN(3160)		bool _hx_tmp2;
HXDLIN(3160)		if (this->get_selectable()) {
HXDLIN(3160)			_hx_tmp2 = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXDLIN(3160)			_hx_tmp2 = false;
            		}
HXDLIN(3160)		if (_hx_tmp2) {
HXDLIN(3160)			_hx_tmp1 = (event->keyCode == 67);
            		}
            		else {
HXDLIN(3160)			_hx_tmp1 = false;
            		}
HXDLIN(3160)		if (_hx_tmp1) {
HXDLIN(3160)			if (!(event->commandKey)) {
HXDLIN(3160)				_hx_tmp = event->ctrlKey;
            			}
            			else {
HXDLIN(3160)				_hx_tmp = true;
            			}
            		}
            		else {
HXDLIN(3160)			_hx_tmp = false;
            		}
HXDLIN(3160)		if (_hx_tmp) {
HXLINE(3162)			if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3164)				::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onKeyDown,(void))

void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3171_this_onMouseDown)
HXLINE(3172)		bool _hx_tmp;
HXDLIN(3172)		if (!(this->get_selectable())) {
HXLINE(3172)			_hx_tmp = ::hx::IsNotEq( this->get_type(),1 );
            		}
            		else {
HXLINE(3172)			_hx_tmp = false;
            		}
HXDLIN(3172)		if (_hx_tmp) {
HXLINE(3172)			return;
            		}
HXLINE(3174)		this->_hx___updateLayout();
HXLINE(3176)		Float _hx_tmp1 = this->get_mouseX();
HXDLIN(3176)		Float _hx_tmp2 = (_hx_tmp1 + this->get_scrollH());
HXDLIN(3176)		this->_hx___caretIndex = this->_hx___getPosition(_hx_tmp2,this->get_mouseY());
HXLINE(3177)		this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3180)		{
HXLINE(3181)			this->_hx___dirty = true;
HXLINE(3182)			if (!(this->_hx___renderDirty)) {
HXLINE(3182)				this->_hx___renderDirty = true;
HXDLIN(3182)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(3186)		this->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
HXLINE(3188)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->stage_onMouseMove_dyn(),null(),null(),null());
HXLINE(3189)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->stage_onMouseUp_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

void TextField_obj::this_onMouseWheel( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3194_this_onMouseWheel)
HXDLIN(3194)		if (this->get_mouseWheelEnabled()) {
HXLINE(3196)			int _hx_tmp = this->get_scrollV();
HXDLIN(3196)			this->set_scrollV((_hx_tmp - event->delta));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseWheel,(void))

void TextField_obj::this_onDoubleClick( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_d001dbc361c2c159_3202_this_onDoubleClick)
HXDLIN(3202)		if (this->get_selectable()) {
HXLINE(3204)			this->_hx___updateLayout();
HXLINE(3206)			::Array< ::String > delimiters = ::Array_obj< ::String >::fromData( _hx_array_data_efd5a8ca_154,13);
HXLINE(3208)			::String txtStr = this->_hx___text;
HXLINE(3209)			int leftPos = -1;
HXLINE(3210)			int rightPos = txtStr.length;
HXLINE(3211)			int pos = 0;
HXLINE(3212)			int startPos = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_hx___caretIndex) ),( (Float)(1) )));
HXLINE(3213)			bool _hx_tmp;
HXDLIN(3213)			bool _hx_tmp1;
HXDLIN(3213)			if ((txtStr.length > 0)) {
HXLINE(3213)				_hx_tmp1 = (this->_hx___caretIndex >= 0);
            			}
            			else {
HXLINE(3213)				_hx_tmp1 = false;
            			}
HXDLIN(3213)			if (_hx_tmp1) {
HXLINE(3213)				_hx_tmp = (rightPos >= this->_hx___caretIndex);
            			}
            			else {
HXLINE(3213)				_hx_tmp = false;
            			}
HXDLIN(3213)			if (_hx_tmp) {
HXLINE(3215)				{
HXLINE(3215)					int _g = 0;
HXDLIN(3215)					while((_g < delimiters->length)){
HXLINE(3215)						::String c = delimiters->__get(_g);
HXDLIN(3215)						_g = (_g + 1);
HXLINE(3217)						pos = txtStr.lastIndexOf(c,(startPos - 1));
HXLINE(3218)						if ((pos > leftPos)) {
HXLINE(3218)							leftPos = (pos + 1);
            						}
HXLINE(3220)						pos = txtStr.indexOf(c,startPos);
HXLINE(3221)						bool _hx_tmp;
HXDLIN(3221)						if ((pos < rightPos)) {
HXLINE(3221)							_hx_tmp = (pos != -1);
            						}
            						else {
HXLINE(3221)							_hx_tmp = false;
            						}
HXDLIN(3221)						if (_hx_tmp) {
HXLINE(3221)							rightPos = pos;
            						}
            					}
            				}
HXLINE(3224)				if ((leftPos != rightPos)) {
HXLINE(3226)					this->setSelection(leftPos,rightPos);
HXLINE(3228)					bool setDirty = true;
HXLINE(3239)					if (setDirty) {
HXLINE(3241)						this->_hx___dirty = true;
HXLINE(3242)						if (!(this->_hx___renderDirty)) {
HXLINE(3242)							this->_hx___renderDirty = true;
HXDLIN(3242)							this->_hx___setParentRenderDirty();
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onDoubleClick,(void))

void TextField_obj::window_onKeyDown(int key,int modifier){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_3252_window_onKeyDown)
HXDLIN(3252)		switch((int)(key)){
            			case (int)8: {
HXLINE(3275)				bool _hx_tmp;
HXDLIN(3275)				if ((this->_hx___selectionIndex == this->_hx___caretIndex)) {
HXLINE(3275)					_hx_tmp = (this->_hx___caretIndex > 0);
            				}
            				else {
HXLINE(3275)					_hx_tmp = false;
            				}
HXDLIN(3275)				if (_hx_tmp) {
HXLINE(3277)					this->_hx___selectionIndex = (this->_hx___caretIndex - 1);
            				}
HXLINE(3280)				if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3282)					this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3283)					this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3285)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            				}
            				else {
HXLINE(3289)					this->_hx___stopCursorTimer();
HXLINE(3290)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			case (int)97: {
HXLINE(3466)				if (this->get_selectable()) {
HXLINE(3467)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3469)						this->setSelection(0,this->_hx___text.length);
            					}
            				}
            			}
            			break;
            			case (int)99: {
HXLINE(3416)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3418)					if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3420)						::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
            					}
            				}
            			}
            			break;
            			case (int)118: {
HXLINE(3442)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3444)					if (::hx::IsNotNull( ::lime::_hx_system::Clipboard_obj::get_text() )) {
HXLINE(3446)						 ::openfl::events::TextEvent te =  ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("textInput",1d,54,0b,57),true,true,::lime::_hx_system::Clipboard_obj::get_text());
HXLINE(3448)						this->dispatchEvent(te);
HXLINE(3450)						if (!(te->isDefaultPrevented())) {
HXLINE(3452)							this->_hx___replaceSelectedText(::lime::_hx_system::Clipboard_obj::get_text(),true);
HXLINE(3454)							this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            						}
            					}
            				}
            				else {
HXLINE(3461)					::Dynamic this1 = this->_hx___textEngine->textFormatRanges;
HXDLIN(3461)					( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_hx___textEngine->textFormatRanges->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextFormatRange >()->end = this->_hx___text.length;
            				}
            			}
            			break;
            			case (int)120: {
HXLINE(3427)				if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3429)					if ((this->_hx___caretIndex != this->_hx___selectionIndex)) {
HXLINE(3431)						::lime::_hx_system::Clipboard_obj::set_text(this->_hx___text.substring(this->_hx___caretIndex,this->_hx___selectionIndex));
HXLINE(3433)						this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3434)						this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            					}
            				}
            			}
            			break;
            			case (int)127: {
HXLINE(3294)				bool _hx_tmp;
HXDLIN(3294)				if ((this->_hx___selectionIndex == this->_hx___caretIndex)) {
HXLINE(3294)					_hx_tmp = (this->_hx___caretIndex < this->_hx___text.length);
            				}
            				else {
HXLINE(3294)					_hx_tmp = false;
            				}
HXDLIN(3294)				if (_hx_tmp) {
HXLINE(3296)					this->_hx___selectionIndex = (this->_hx___caretIndex + 1);
            				}
HXLINE(3299)				if ((this->_hx___selectionIndex != this->_hx___caretIndex)) {
HXLINE(3301)					this->replaceSelectedText(HX_("",00,00,00,00));
HXLINE(3302)					this->_hx___selectionIndex = this->_hx___caretIndex;
HXLINE(3304)					this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            				}
            				else {
HXLINE(3308)					this->_hx___stopCursorTimer();
HXLINE(3309)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			case (int)1073741898: {
HXLINE(3380)				if (this->get_selectable()) {
HXLINE(3381)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3383)						this->_hx___caretIndex = 0;
            					}
            					else {
HXLINE(3387)						this->_hx___caretBeginningOfLine();
            					}
HXLINE(3390)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3392)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3395)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741901: {
HXLINE(3397)				if (this->get_selectable()) {
HXLINE(3398)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3400)						this->_hx___caretIndex = this->_hx___text.length;
            					}
            					else {
HXLINE(3404)						this->_hx___caretEndOfLine();
            					}
HXLINE(3407)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3409)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3412)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741903: {
HXLINE(3329)				if (this->get_selectable()) {
HXLINE(3330)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3332)						this->_hx___caretBeginningOfNextLine();
            					}
            					else {
HXLINE(3336)						this->_hx___caretNextCharacter();
            					}
HXLINE(3339)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3341)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3344)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741904: {
HXLINE(3312)				if (this->get_selectable()) {
HXLINE(3313)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3315)						this->_hx___caretBeginningOfPreviousLine();
            					}
            					else {
HXLINE(3319)						this->_hx___caretPreviousCharacter();
            					}
HXLINE(3322)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3324)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3327)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741905: {
HXLINE(3346)				if (this->get_selectable()) {
HXLINE(3347)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3349)						this->_hx___caretIndex = this->_hx___text.length;
            					}
            					else {
HXLINE(3353)						this->_hx___caretNextLine();
            					}
HXLINE(3356)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3358)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3361)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)1073741906: {
HXLINE(3363)				if (this->get_selectable()) {
HXLINE(3364)					if (::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier)) {
HXLINE(3366)						this->_hx___caretIndex = 0;
            					}
            					else {
HXLINE(3370)						this->_hx___caretPreviousLine();
            					}
HXLINE(3373)					if (!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) {
HXLINE(3375)						this->_hx___selectionIndex = this->_hx___caretIndex;
            					}
HXLINE(3378)					this->setSelection(this->_hx___selectionIndex,this->_hx___caretIndex);
            				}
            			}
            			break;
            			case (int)13: case (int)1073741912: {
HXLINE(3255)				if (this->_hx___textEngine->multiline) {
HXLINE(3257)					 ::openfl::events::TextEvent te =  ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,HX_("textInput",1d,54,0b,57),true,true,HX_("\n",0a,00,00,00));
HXLINE(3259)					this->dispatchEvent(te);
HXLINE(3261)					if (!(te->isDefaultPrevented())) {
HXLINE(3263)						this->_hx___replaceSelectedText(HX_("\n",0a,00,00,00),true);
HXLINE(3265)						this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            					}
            				}
            				else {
HXLINE(3270)					this->_hx___stopCursorTimer();
HXLINE(3271)					this->_hx___startCursorTimer();
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

void TextField_obj::window_onTextInput(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_3478_window_onTextInput)
HXLINE(3479)		this->_hx___replaceSelectedText(value,true);
HXLINE(3482)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),true,null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

 ::openfl::text::TextFormat TextField_obj::_hx___defaultTextFormat;

 ::haxe::ds::StringMap TextField_obj::_hx___missingFontWarning;


::hx::ObjectPtr< TextField_obj > TextField_obj::__new() {
	::hx::ObjectPtr< TextField_obj > __this = new TextField_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextField_obj > TextField_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextField_obj *__this = (TextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextField_obj), true, "openfl.text.TextField"));
	*(void **)__this = TextField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_MARK_MEMBER_NAME(_hx___caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___displayAsPassword,"__displayAsPassword");
	HX_MARK_MEMBER_NAME(_hx___domRender,"__domRender");
	HX_MARK_MEMBER_NAME(_hx___inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(_hx___isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(_hx___layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(_hx___mouseScrollVCounter,"__mouseScrollVCounter");
	HX_MARK_MEMBER_NAME(_hx___mouseWheelEnabled,"__mouseWheelEnabled");
	HX_MARK_MEMBER_NAME(_hx___offsetX,"__offsetX");
	HX_MARK_MEMBER_NAME(_hx___offsetY,"__offsetY");
	HX_MARK_MEMBER_NAME(_hx___selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___text,"__text");
	HX_MARK_MEMBER_NAME(_hx___htmlText,"__htmlText");
	HX_MARK_MEMBER_NAME(_hx___textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(_hx___caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___displayAsPassword,"__displayAsPassword");
	HX_VISIT_MEMBER_NAME(_hx___domRender,"__domRender");
	HX_VISIT_MEMBER_NAME(_hx___inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(_hx___isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(_hx___layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(_hx___mouseScrollVCounter,"__mouseScrollVCounter");
	HX_VISIT_MEMBER_NAME(_hx___mouseWheelEnabled,"__mouseWheelEnabled");
	HX_VISIT_MEMBER_NAME(_hx___offsetX,"__offsetX");
	HX_VISIT_MEMBER_NAME(_hx___offsetY,"__offsetY");
	HX_VISIT_MEMBER_NAME(_hx___selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___text,"__text");
	HX_VISIT_MEMBER_NAME(_hx___htmlText,"__htmlText");
	HX_VISIT_MEMBER_NAME(_hx___textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_border() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"__text") ) { return ::hx::Val( _hx___text ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollH() ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollV() ); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxChars() ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLines() ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrict() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return ::hx::Val( _hx___bounds ); }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return ::hx::Val( _hx___isHTML ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sharpness() ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textColor() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textWidth() ); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { return ::hx::Val( _hx___offsetX ); }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { return ::hx::Val( _hx___offsetY ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_background() ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_caretIndex() ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedFonts() ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollH() ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollV() ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectable() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textHeight() ); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { return ::hx::Val( _hx___htmlText ); }
		if (HX_FIELD_EQ(inName,"appendText") ) { return ::hx::Val( appendText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return ::hx::Val( _hx___dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getGroup") ) { return ::hx::Val( _hx___getGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return ::hx::Val( get_border_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return ::hx::Val( set_border_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderColor() ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gridFitType() ); }
		if (HX_FIELD_EQ(inName,"__domRender") ) { return ::hx::Val( _hx___domRender ); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return ::hx::Val( getLineText_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return ::hx::Val( replaceText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return ::hx::Val( get_scrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return ::hx::Val( set_scrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return ::hx::Val( _hx___caretIndex ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return ::hx::Val( _hx___textEngine ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return ::hx::Val( setSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getAdvance") ) { return ::hx::Val( _hx___getAdvance_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateText") ) { return ::hx::Val( _hx___updateText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return ::hx::Val( get_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return ::hx::Val( set_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return ::hx::Val( get_numLines_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return ::hx::Val( get_restrict_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_antiAliasType() ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottomScrollV() ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return ::hx::Val( _hx___layoutDirty ); }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return ::hx::Val( getLineLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return ::hx::Val( getLineOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return ::hx::Val( getTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return ::hx::Val( setTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enableInput") ) { return ::hx::Val( _hx___enableInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return ::hx::Val( _hx___getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"__replaceText") ) { return ::hx::Val( _hx___replaceText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return ::hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return ::hx::Val( set_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return ::hx::Val( get_sharpness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return ::hx::Val( set_sharpness_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return ::hx::Val( get_textColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return ::hx::Val( set_textColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return ::hx::Val( _hx___inputEnabled ); }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return ::hx::Val( getLineMetrics_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disableInput") ) { return ::hx::Val( _hx___disableInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return ::hx::Val( _hx___updateLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return ::hx::Val( get_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return ::hx::Val( set_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return ::hx::Val( get_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return ::hx::Val( get_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return ::hx::Val( set_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return ::hx::Val( get_maxScrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return ::hx::Val( get_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return ::hx::Val( set_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return ::hx::Val( this_onFocusIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onKeyDown") ) { return ::hx::Val( this_onKeyDown_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"__caretNextLine") ) { return ::hx::Val( _hx___caretNextLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return ::hx::Val( _hx___stopTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateScrollH") ) { return ::hx::Val( _hx___updateScrollH_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateScrollV") ) { return ::hx::Val( _hx___updateScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return ::hx::Val( get_gridFitType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return ::hx::Val( set_gridFitType_dyn() ); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return ::hx::Val( stage_onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return ::hx::Val( this_onFocusOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return ::hx::Val( _hx___selectionIndex ); }
		if (HX_FIELD_EQ(inName,"__caretEndOfLine") ) { return ::hx::Val( _hx___caretEndOfLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return ::hx::Val( _hx___startTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return ::hx::Val( this_onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return ::hx::Val( window_onKeyDown_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_defaultTextFormat() ); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_displayAsPassword() ); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseWheelEnabled() ); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEndIndex() ); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return ::hx::Val( getCharBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"__allowMouseFocus") ) { return ::hx::Val( _hx___allowMouseFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return ::hx::Val( _hx___stopCursorTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateMouseDrag") ) { return ::hx::Val( _hx___updateMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return ::hx::Val( get_antiAliasType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return ::hx::Val( set_antiAliasType_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return ::hx::Val( stage_onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return ::hx::Val( this_onEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onMouseWheel") ) { return ::hx::Val( this_onMouseWheel_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return ::hx::Val( getLineIndexOfChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return ::hx::Val( getParagraphLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return ::hx::Val( _hx___startCursorTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return ::hx::Val( _hx___updateTransforms_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onDoubleClick") ) { return ::hx::Val( this_onDoubleClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return ::hx::Val( window_onTextInput_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionBeginIndex() ); }
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { return ::hx::Val( _hx___displayAsPassword ); }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { return ::hx::Val( _hx___mouseWheelEnabled ); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return ::hx::Val( getCharIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return ::hx::Val( getLineIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return ::hx::Val( replaceSelectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"__caretPreviousLine") ) { return ::hx::Val( _hx___caretPreviousLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCharBoundaries") ) { return ::hx::Val( _hx___getCharBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return ::hx::Val( this_onAddedToStage_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__caretNextCharacter") ) { return ::hx::Val( _hx___caretNextCharacter_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__mouseScrollVCounter") ) { return ::hx::Val( _hx___mouseScrollVCounter ); }
		if (HX_FIELD_EQ(inName,"__replaceSelectedText") ) { return ::hx::Val( _hx___replaceSelectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return ::hx::Val( get_defaultTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return ::hx::Val( set_defaultTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return ::hx::Val( get_displayAsPassword_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return ::hx::Val( set_displayAsPassword_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseWheelEnabled") ) { return ::hx::Val( get_mouseWheelEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseWheelEnabled") ) { return ::hx::Val( set_mouseWheelEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return ::hx::Val( get_selectionEndIndex_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfLine") ) { return ::hx::Val( _hx___caretBeginningOfLine_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return ::hx::Val( getFirstCharInParagraph_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return ::hx::Val( get_selectionBeginIndex_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__caretPreviousCharacter") ) { return ::hx::Val( _hx___caretPreviousCharacter_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfNextLine") ) { return ::hx::Val( _hx___caretBeginningOfNextLine_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__getCharIndexOnDifferentLine") ) { return ::hx::Val( _hx___getCharIndexOnDifferentLine_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"__caretBeginningOfPreviousLine") ) { return ::hx::Val( _hx___caretBeginningOfPreviousLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = ( _hx___defaultTextFormat ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { outValue = ( _hx___missingFontWarning ); return true; }
	}
	return false;
}

::hx::Val TextField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_border(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__text") ) { _hx___text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollH(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxChars(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { _hx___bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { _hx___isHTML=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sharpness(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__offsetX") ) { _hx___offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offsetY") ) { _hx___offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_background(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_embedFonts(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__htmlText") ) { _hx___htmlText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gridFitType(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"__domRender") ) { _hx___domRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { _hx___caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { _hx___textEngine=inValue.Cast<  ::openfl::text::_internal::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antiAliasType(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { _hx___layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { _hx___inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { _hx___selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultTextFormat(inValue.Cast<  ::openfl::text::TextFormat >()) ); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_displayAsPassword(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseWheelEnabled(inValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { _hx___displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { _hx___mouseWheelEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__mouseScrollVCounter") ) { _hx___mouseScrollVCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { _hx___defaultTextFormat=ioValue.Cast<  ::openfl::text::TextFormat >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__missingFontWarning") ) { _hx___missingFontWarning=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("defaultTextFormat",e5,c7,e0,0a));
	outFields->push(HX_("displayAsPassword",0f,cb,96,ea));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("mouseWheelEnabled",eb,16,54,65));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("selectionBeginIndex",95,7f,17,d7));
	outFields->push(HX_("selectionEndIndex",a3,0d,42,4b));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textColor",76,01,4a,e3));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("__bounds",95,f1,4c,0e));
	outFields->push(HX_("__caretIndex",af,31,ef,15));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__displayAsPassword",ef,f3,86,9d));
	outFields->push(HX_("__domRender",58,38,ba,4f));
	outFields->push(HX_("__inputEnabled",b7,e0,1d,37));
	outFields->push(HX_("__isHTML",75,61,94,0a));
	outFields->push(HX_("__layoutDirty",e8,e9,31,d3));
	outFields->push(HX_("__mouseScrollVCounter",38,bc,63,27));
	outFields->push(HX_("__mouseWheelEnabled",cb,3f,44,18));
	outFields->push(HX_("__offsetX",45,5a,b3,58));
	outFields->push(HX_("__offsetY",46,5a,b3,58));
	outFields->push(HX_("__selectionIndex",46,0a,c3,7d));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__text",cd,2f,f2,fb));
	outFields->push(HX_("__htmlText",d8,92,70,b3));
	outFields->push(HX_("__textEngine",6f,43,08,6c));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextField_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextField_obj,_hx___bounds),HX_("__bounds",95,f1,4c,0e)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___caretIndex),HX_("__caretIndex",af,31,ef,15)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextField_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___displayAsPassword),HX_("__displayAsPassword",ef,f3,86,9d)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___domRender),HX_("__domRender",58,38,ba,4f)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___inputEnabled),HX_("__inputEnabled",b7,e0,1d,37)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___isHTML),HX_("__isHTML",75,61,94,0a)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___layoutDirty),HX_("__layoutDirty",e8,e9,31,d3)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___mouseScrollVCounter),HX_("__mouseScrollVCounter",38,bc,63,27)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___mouseWheelEnabled),HX_("__mouseWheelEnabled",cb,3f,44,18)},
	{::hx::fsFloat,(int)offsetof(TextField_obj,_hx___offsetX),HX_("__offsetX",45,5a,b3,58)},
	{::hx::fsFloat,(int)offsetof(TextField_obj,_hx___offsetY),HX_("__offsetY",46,5a,b3,58)},
	{::hx::fsInt,(int)offsetof(TextField_obj,_hx___selectionIndex),HX_("__selectionIndex",46,0a,c3,7d)},
	{::hx::fsBool,(int)offsetof(TextField_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsString,(int)offsetof(TextField_obj,_hx___text),HX_("__text",cd,2f,f2,fb)},
	{::hx::fsString,(int)offsetof(TextField_obj,_hx___htmlText),HX_("__htmlText",d8,92,70,b3)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextEngine */ ,(int)offsetof(TextField_obj,_hx___textEngine),HX_("__textEngine",6f,43,08,6c)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextField_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextField_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(void *) &TextField_obj::_hx___defaultTextFormat,HX_("__defaultTextFormat",c5,f0,d0,bd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextField_obj::_hx___missingFontWarning,HX_("__missingFontWarning",a7,0d,0e,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextField_obj_sMemberFields[] = {
	HX_("__bounds",95,f1,4c,0e),
	HX_("__caretIndex",af,31,ef,15),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__displayAsPassword",ef,f3,86,9d),
	HX_("__domRender",58,38,ba,4f),
	HX_("__inputEnabled",b7,e0,1d,37),
	HX_("__isHTML",75,61,94,0a),
	HX_("__layoutDirty",e8,e9,31,d3),
	HX_("__mouseScrollVCounter",38,bc,63,27),
	HX_("__mouseWheelEnabled",cb,3f,44,18),
	HX_("__offsetX",45,5a,b3,58),
	HX_("__offsetY",46,5a,b3,58),
	HX_("__selectionIndex",46,0a,c3,7d),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__text",cd,2f,f2,fb),
	HX_("__htmlText",d8,92,70,b3),
	HX_("__textEngine",6f,43,08,6c),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("appendText",a7,cf,05,5b),
	HX_("getCharBoundaries",74,85,a1,8b),
	HX_("getCharIndexAtPoint",17,ee,9c,aa),
	HX_("getFirstCharInParagraph",f9,5c,3d,08),
	HX_("getLineIndexAtPoint",35,dc,50,98),
	HX_("getLineIndexOfChar",b5,68,99,a1),
	HX_("getLineLength",30,ec,21,d0),
	HX_("getLineMetrics",b9,ab,c6,f2),
	HX_("getLineOffset",dd,ee,59,91),
	HX_("getLineText",77,dd,16,b0),
	HX_("getParagraphLength",fe,0e,4e,c4),
	HX_("getTextFormat",fa,6b,f1,90),
	HX_("replaceSelectedText",fc,fe,33,bb),
	HX_("replaceText",01,6b,95,61),
	HX_("setSelection",4a,b8,6a,b2),
	HX_("setTextFormat",06,4e,f7,d5),
	HX_("__allowMouseFocus",3c,92,71,07),
	HX_("__caretBeginningOfLine",45,c9,47,fd),
	HX_("__caretBeginningOfNextLine",58,ec,35,93),
	HX_("__caretBeginningOfPreviousLine",1c,d2,e4,ff),
	HX_("__caretEndOfLine",03,74,b1,5c),
	HX_("__caretNextCharacter",d3,7b,4f,ea),
	HX_("__caretNextLine",0a,68,ad,0d),
	HX_("__caretPreviousCharacter",8f,ce,6c,11),
	HX_("__caretPreviousLine",ce,0e,89,48),
	HX_("__disableInput",22,64,62,1d),
	HX_("__dispatch",da,41,9c,c1),
	HX_("__enableInput",67,4b,65,d1),
	HX_("__getAdvance",ac,09,01,77),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getCharBoundaries",54,ae,91,3e),
	HX_("__getCharIndexOnDifferentLine",08,76,0f,0a),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__getGroup",e9,35,04,9d),
	HX_("__getPosition",3f,a4,66,39),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__replaceSelectedText",dc,1f,28,29),
	HX_("__replaceText",e1,ab,0d,aa),
	HX_("__startCursorTimer",ed,46,a3,83),
	HX_("__startTextInput",7b,ae,85,aa),
	HX_("__stopCursorTimer",0d,cd,6c,26),
	HX_("__stopTextInput",9b,6c,cb,a1),
	HX_("__updateLayout",b3,d8,3c,79),
	HX_("__updateScrollH",72,d1,f8,83),
	HX_("__updateScrollV",80,d1,f8,83),
	HX_("__updateMouseDrag",50,e6,a9,c1),
	HX_("__updateText",76,32,42,3e),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("get_antiAliasType",bf,cf,6a,ee),
	HX_("set_antiAliasType",cb,a7,d8,11),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_background",37,1c,13,9c),
	HX_("set_background",ab,04,33,bc),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_border",b5,bc,a1,54),
	HX_("set_border",29,5b,1f,58),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("set_borderColor",7a,71,82,93),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_caretIndex",d8,3e,51,53),
	HX_("get_defaultTextFormat",bc,ca,8e,89),
	HX_("set_defaultTextFormat",c8,98,97,dd),
	HX_("get_displayAsPassword",e6,cd,44,69),
	HX_("set_displayAsPassword",f2,9b,4d,bd),
	HX_("get_embedFonts",74,4f,d7,04),
	HX_("set_embedFonts",e8,37,f7,24),
	HX_("get_gridFitType",9c,aa,f5,74),
	HX_("set_gridFitType",a8,27,c1,70),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_length",af,04,8f,8f),
	HX_("get_maxChars",a2,a3,ea,a4),
	HX_("set_maxChars",16,c7,e3,b9),
	HX_("get_maxScrollH",a0,35,f2,10),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("get_mouseWheelEnabled",c2,19,02,e4),
	HX_("set_mouseWheelEnabled",ce,e7,0a,38),
	HX_("get_multiline",c4,a6,75,5f),
	HX_("set_multiline",d0,88,7b,a4),
	HX_("get_numLines",e2,a5,2b,e7),
	HX_("get_restrict",45,7f,b8,a6),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollH",b2,93,d2,b6),
	HX_("set_scrollH",be,9a,3f,c1),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("get_selectable",df,3e,20,3a),
	HX_("set_selectable",53,27,40,5a),
	HX_("get_selectionBeginIndex",2c,26,6d,df),
	HX_("get_selectionEndIndex",7a,10,f0,c9),
	HX_("get_sharpness",58,f6,88,dc),
	HX_("set_sharpness",64,d8,8e,21),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_textColor",4d,d5,ad,a4),
	HX_("set_textColor",59,b7,b3,e9),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("stage_onMouseMove",76,bc,61,de),
	HX_("stage_onMouseUp",80,ac,07,d1),
	HX_("this_onAddedToStage",23,9e,ce,72),
	HX_("this_onEnterFrame",b5,0f,1f,8e),
	HX_("this_onFocusIn",1d,62,fb,dc),
	HX_("this_onFocusOut",56,0b,ff,7e),
	HX_("this_onKeyDown",e1,85,bf,37),
	HX_("this_onMouseDown",67,5d,aa,6d),
	HX_("this_onMouseWheel",f6,33,56,73),
	HX_("this_onDoubleClick",b7,3f,d1,96),
	HX_("window_onKeyDown",f3,7d,3b,d1),
	HX_("window_onTextInput",ef,a0,6a,c0),
	::String(null()) };

static void TextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::_hx___defaultTextFormat,"__defaultTextFormat");
	HX_MARK_MEMBER_NAME(TextField_obj::_hx___missingFontWarning,"__missingFontWarning");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::_hx___defaultTextFormat,"__defaultTextFormat");
	HX_VISIT_MEMBER_NAME(TextField_obj::_hx___missingFontWarning,"__missingFontWarning");
};

#endif

::hx::Class TextField_obj::__mClass;

static ::String TextField_obj_sStaticFields[] = {
	HX_("__defaultTextFormat",c5,f0,d0,bd),
	HX_("__missingFontWarning",a7,0d,0e,1a),
	::String(null())
};

void TextField_obj::__register()
{
	TextField_obj _hx_dummy;
	TextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.TextField",ca,a8,d5,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = TextField_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextField_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d001dbc361c2c159_127_boot)
HXDLIN( 127)		_hx___missingFontWarning =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace text
