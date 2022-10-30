#ifndef INCLUDED_openfl_display_Stage
#define INCLUDED_openfl_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,MouseWheelMode)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Stage_obj : public  ::openfl::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();

	public:
		enum { _hx_ClassId = 0x52748750 };

		void __construct( ::lime::ui::Window window, ::Dynamic color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Stage"); }
		static ::hx::ObjectPtr< Stage_obj > __new( ::lime::ui::Window window, ::Dynamic color);
		static ::hx::ObjectPtr< Stage_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::ui::Window window, ::Dynamic color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Stage",9e,da,38,17); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic align;
		bool allowsFullScreen;
		bool allowsFullScreenInteractive;
		 ::lime::app::Application application;
		 ::openfl::display3D::Context3D context3D;
		bool showDefaultContextMenu;
		 ::openfl::geom::Rectangle softKeyboardRect;
		 ::openfl::_Vector::ObjectVector stage3Ds;
		bool stageFocusRect;
		int stageHeight;
		int stageWidth;
		 ::lime::ui::Window window;
		 ::openfl::display::InteractiveObject _hx___cacheFocus;
		bool _hx___clearBeforeRender;
		int _hx___color;
		::Array< Float > _hx___colorSplit;
		::String _hx___colorString;
		Float _hx___contentsScaleFactor;
		int _hx___currentTabOrderIndex;
		int _hx___deltaTime;
		bool _hx___dirty;
		 ::openfl::geom::Matrix _hx___displayMatrix;
		 ::openfl::geom::Rectangle _hx___displayRect;
		 ::Dynamic _hx___displayState;
		 ::openfl::geom::Rectangle _hx___dragBounds;
		 ::openfl::display::Sprite _hx___dragObject;
		Float _hx___dragOffsetX;
		Float _hx___dragOffsetY;
		 ::openfl::display::InteractiveObject _hx___focus;
		bool _hx___forceRender;
		bool _hx___fullscreen;
		 ::openfl::geom::Rectangle _hx___fullScreenSourceRect;
		bool _hx___invalidated;
		int _hx___lastClickTime;
		int _hx___logicalWidth;
		int _hx___logicalHeight;
		bool _hx___macKeyboard;
		 ::openfl::display::InteractiveObject _hx___mouseDownLeft;
		 ::openfl::display::InteractiveObject _hx___mouseDownMiddle;
		 ::openfl::display::InteractiveObject _hx___mouseDownRight;
		::Array< ::Dynamic> _hx___mouseOutStack;
		 ::openfl::display::InteractiveObject _hx___mouseOverTarget;
		Float _hx___mouseX;
		Float _hx___mouseY;
		bool _hx___pendingMouseEvent;
		int _hx___pendingMouseX;
		int _hx___pendingMouseY;
		 ::Dynamic _hx___quality;
		 ::openfl::display::DisplayObjectRenderer _hx___renderer;
		bool _hx___rendering;
		::Array< ::Dynamic> _hx___rollOutStack;
		 ::Dynamic _hx___scaleMode;
		::Array< ::Dynamic> _hx___stack;
		 ::haxe::ds::IntMap _hx___touchData;
		bool _hx___transparent;
		bool _hx___wasDirty;
		bool _hx___wasFullscreen;
		 ::lime::ui::Touch _hx___primaryTouch;
		void invalidate();

		 ::openfl::geom::Point localToGlobal( ::openfl::geom::Point pos);

		void _hx___broadcastEvent( ::openfl::events::Event event);
		::Dynamic _hx___broadcastEvent_dyn();

		void _hx___createRenderer();
		::Dynamic _hx___createRenderer_dyn();

		bool _hx___dispatchEvent( ::openfl::events::Event event);

		void _hx___dispatchPendingMouseEvent();
		::Dynamic _hx___dispatchPendingMouseEvent_dyn();

		void _hx___dispatchStack( ::openfl::events::Event event,::Array< ::Dynamic> stack);
		::Dynamic _hx___dispatchStack_dyn();

		bool _hx___dispatchTarget( ::openfl::events::EventDispatcher target, ::openfl::events::Event event);
		::Dynamic _hx___dispatchTarget_dyn();

		void _hx___drag( ::openfl::geom::Point mouse);
		::Dynamic _hx___drag_dyn();

		bool _hx___getInteractive(::Array< ::Dynamic> stack);

		 ::openfl::geom::Point _hx___globalToLocal( ::openfl::geom::Point global, ::openfl::geom::Point local);

		void _hx___handleError( ::Dynamic e);
		::Dynamic _hx___handleError_dyn();

		void _hx___onKey(::String type,int keyCode,int modifier);
		::Dynamic _hx___onKey_dyn();

		void _hx___onLimeCreateWindow( ::lime::ui::Window window);
		::Dynamic _hx___onLimeCreateWindow_dyn();

		void _hx___onLimeGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		::Dynamic _hx___onLimeGamepadAxisMove_dyn();

		void _hx___onLimeGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic _hx___onLimeGamepadButtonDown_dyn();

		void _hx___onLimeGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic _hx___onLimeGamepadButtonUp_dyn();

		void _hx___onLimeGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onLimeGamepadConnect_dyn();

		void _hx___onLimeGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onLimeGamepadDisconnect_dyn();

		void _hx___onLimeKeyDown( ::lime::ui::Window window,int keyCode,int modifier);
		::Dynamic _hx___onLimeKeyDown_dyn();

		void _hx___onLimeKeyUp( ::lime::ui::Window window,int keyCode,int modifier);
		::Dynamic _hx___onLimeKeyUp_dyn();

		void _hx___onLimeModuleExit(int code);
		::Dynamic _hx___onLimeModuleExit_dyn();

		void _hx___onLimeMouseDown( ::lime::ui::Window window,Float x,Float y,int button);
		::Dynamic _hx___onLimeMouseDown_dyn();

		void _hx___onLimeMouseMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic _hx___onLimeMouseMove_dyn();

		void _hx___onLimeMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);
		::Dynamic _hx___onLimeMouseMoveRelative_dyn();

		void _hx___onLimeMouseUp( ::lime::ui::Window window,Float x,Float y,int button);
		::Dynamic _hx___onLimeMouseUp_dyn();

		void _hx___onLimeMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY, ::lime::ui::MouseWheelMode deltaMode);
		::Dynamic _hx___onLimeMouseWheel_dyn();

		void _hx___onLimeRender( ::lime::graphics::RenderContext context);
		::Dynamic _hx___onLimeRender_dyn();

		void _hx___onLimeRenderContextLost();
		::Dynamic _hx___onLimeRenderContextLost_dyn();

		void _hx___onLimeRenderContextRestored( ::lime::graphics::RenderContext context);
		::Dynamic _hx___onLimeRenderContextRestored_dyn();

		void _hx___onLimeTextEdit( ::lime::ui::Window window,::String text,int start,int length);
		::Dynamic _hx___onLimeTextEdit_dyn();

		void _hx___onLimeTextInput( ::lime::ui::Window window,::String text);
		::Dynamic _hx___onLimeTextInput_dyn();

		void _hx___onLimeTouchCancel( ::lime::ui::Touch touch);
		::Dynamic _hx___onLimeTouchCancel_dyn();

		void _hx___onLimeTouchMove( ::lime::ui::Touch touch);
		::Dynamic _hx___onLimeTouchMove_dyn();

		void _hx___onLimeTouchEnd( ::lime::ui::Touch touch);
		::Dynamic _hx___onLimeTouchEnd_dyn();

		void _hx___onLimeTouchStart( ::lime::ui::Touch touch);
		::Dynamic _hx___onLimeTouchStart_dyn();

		void _hx___onLimeUpdate(int deltaTime);
		::Dynamic _hx___onLimeUpdate_dyn();

		void _hx___onLimeWindowActivate( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowActivate_dyn();

		void _hx___onLimeWindowClose( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowClose_dyn();

		void _hx___onLimeWindowCreate( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowCreate_dyn();

		void _hx___onLimeWindowDeactivate( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowDeactivate_dyn();

		void _hx___onLimeWindowDropFile( ::lime::ui::Window window,::String file);
		::Dynamic _hx___onLimeWindowDropFile_dyn();

		void _hx___onLimeWindowEnter( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowEnter_dyn();

		void _hx___onLimeWindowExpose( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowExpose_dyn();

		void _hx___onLimeWindowFocusIn( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowFocusIn_dyn();

		void _hx___onLimeWindowFocusOut( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowFocusOut_dyn();

		void _hx___onLimeWindowFullscreen( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowFullscreen_dyn();

		void _hx___onLimeWindowLeave( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowLeave_dyn();

		void _hx___onLimeWindowMinimize( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowMinimize_dyn();

		void _hx___onLimeWindowMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic _hx___onLimeWindowMove_dyn();

		void _hx___onLimeWindowResize( ::lime::ui::Window window,int width,int height);
		::Dynamic _hx___onLimeWindowResize_dyn();

		void _hx___onLimeWindowRestore( ::lime::ui::Window window);
		::Dynamic _hx___onLimeWindowRestore_dyn();

		void _hx___onMouse(::String type,Float x,Float y,int button);
		::Dynamic _hx___onMouse_dyn();

		void _hx___onMouseWheel(Float deltaX,Float deltaY, ::lime::ui::MouseWheelMode deltaMode);
		::Dynamic _hx___onMouseWheel_dyn();

		void _hx___onTouch(::String type, ::lime::ui::Touch touch,bool isPrimaryTouchPoint);
		::Dynamic _hx___onTouch_dyn();

		void _hx___registerLimeModule( ::lime::app::Application application);
		::Dynamic _hx___registerLimeModule_dyn();

		void _hx___resize();
		::Dynamic _hx___resize_dyn();

		void _hx___setLogicalSize(int width,int height);
		::Dynamic _hx___setLogicalSize_dyn();

		void _hx___startDrag( ::openfl::display::Sprite sprite,bool lockCenter, ::openfl::geom::Rectangle bounds);
		::Dynamic _hx___startDrag_dyn();

		void _hx___stopDrag( ::openfl::display::Sprite sprite);
		::Dynamic _hx___stopDrag_dyn();

		void _hx___unregisterLimeModule( ::lime::app::Application application);
		::Dynamic _hx___unregisterLimeModule_dyn();

		void _hx___update(bool transformOnly,bool updateChildren);

		 ::Dynamic get_color();
		::Dynamic get_color_dyn();

		 ::Dynamic set_color( ::Dynamic value);
		::Dynamic set_color_dyn();

		Float get_contentsScaleFactor();
		::Dynamic get_contentsScaleFactor_dyn();

		 ::Dynamic get_displayState();
		::Dynamic get_displayState_dyn();

		 ::Dynamic set_displayState( ::Dynamic value);
		::Dynamic set_displayState_dyn();

		 ::openfl::display::InteractiveObject get_focus();
		::Dynamic get_focus_dyn();

		 ::openfl::display::InteractiveObject set_focus( ::openfl::display::InteractiveObject value);
		::Dynamic set_focus_dyn();

		Float get_frameRate();
		::Dynamic get_frameRate_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		int get_fullScreenHeight();
		::Dynamic get_fullScreenHeight_dyn();

		 ::openfl::geom::Rectangle get_fullScreenSourceRect();
		::Dynamic get_fullScreenSourceRect_dyn();

		 ::openfl::geom::Rectangle set_fullScreenSourceRect( ::openfl::geom::Rectangle value);
		::Dynamic set_fullScreenSourceRect_dyn();

		int get_fullScreenWidth();
		::Dynamic get_fullScreenWidth_dyn();

		Float set_height(Float value);

		Float get_mouseX();

		Float get_mouseY();

		 ::Dynamic get_quality();
		::Dynamic get_quality_dyn();

		 ::Dynamic set_quality( ::Dynamic value);
		::Dynamic set_quality_dyn();

		Float set_rotation(Float value);

		 ::Dynamic get_scaleMode();
		::Dynamic get_scaleMode_dyn();

		 ::Dynamic set_scaleMode( ::Dynamic value);
		::Dynamic set_scaleMode_dyn();

		Float set_scaleX(Float value);

		Float set_scaleY(Float value);

		bool get_tabEnabled();

		bool set_tabEnabled(bool value);

		int get_tabIndex();

		int set_tabIndex(int value);

		 ::openfl::geom::Transform set_transform( ::openfl::geom::Transform value);

		Float set_width(Float value);

		Float set_x(Float value);

		Float set_y(Float value);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage */ 
