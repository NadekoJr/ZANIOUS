#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Tooltip
#include <flixel/system/debug/Tooltip.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e11c5e295c1ca4dc_23_init,"flixel.system.debug.Tooltip","init",0xd1581303,"flixel.system.debug.Tooltip.init","flixel/system/debug/Tooltip.hx",23,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_e11c5e295c1ca4dc_27_add,"flixel.system.debug.Tooltip","add",0xdf9f998e,"flixel.system.debug.Tooltip.add","flixel/system/debug/Tooltip.hx",27,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_e11c5e295c1ca4dc_36_remove,"flixel.system.debug.Tooltip","remove",0x530196f7,"flixel.system.debug.Tooltip.remove","flixel/system/debug/Tooltip.hx",36,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_e11c5e295c1ca4dc_18_boot,"flixel.system.debug.Tooltip","boot",0xccb85c25,"flixel.system.debug.Tooltip.boot","flixel/system/debug/Tooltip.hx",18,0x5d425da4)
namespace flixel{
namespace _hx_system{
namespace debug{

void Tooltip_obj::__construct() { }

Dynamic Tooltip_obj::__CreateEmpty() { return new Tooltip_obj; }

void *Tooltip_obj::_hx_vtable = 0;

Dynamic Tooltip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tooltip_obj > _hx_result = new Tooltip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tooltip_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38fca8fb;
}

::Array< ::Dynamic> Tooltip_obj::_tooltips;

 ::openfl::display::Sprite Tooltip_obj::_container;

void Tooltip_obj::init( ::openfl::display::Sprite container){
            	HX_STACKFRAME(&_hx_pos_e11c5e295c1ca4dc_23_init)
HXDLIN(  23)		::flixel::_hx_system::debug::Tooltip_obj::_container = container;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tooltip_obj,init,(void))

 ::flixel::_hx_system::debug::TooltipOverlay Tooltip_obj::add( ::openfl::display::Sprite element,::String text){
            	HX_GC_STACKFRAME(&_hx_pos_e11c5e295c1ca4dc_27_add)
HXLINE(  28)		 ::flixel::_hx_system::debug::TooltipOverlay tooltip =  ::flixel::_hx_system::debug::TooltipOverlay_obj::__alloc( HX_CTX ,element,text,null(),null());
HXLINE(  30)		::flixel::_hx_system::debug::Tooltip_obj::_container->addChild(tooltip);
HXLINE(  31)		::flixel::_hx_system::debug::Tooltip_obj::_tooltips->push(tooltip);
HXLINE(  32)		return tooltip;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tooltip_obj,add,return )

bool Tooltip_obj::remove( ::openfl::display::Sprite element){
            	HX_STACKFRAME(&_hx_pos_e11c5e295c1ca4dc_36_remove)
HXLINE(  37)		bool removed = false;
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			int _g1 = ::flixel::_hx_system::debug::Tooltip_obj::_tooltips->length;
HXDLIN(  39)			while((_g < _g1)){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int i = (_g - 1);
HXLINE(  41)				bool _hx_tmp;
HXDLIN(  41)				if (::hx::IsNotNull( ::flixel::_hx_system::debug::Tooltip_obj::_tooltips->__get(i).StaticCast<  ::flixel::_hx_system::debug::TooltipOverlay >() )) {
HXLINE(  41)					_hx_tmp = ::hx::IsInstanceEq( ::flixel::_hx_system::debug::Tooltip_obj::_tooltips->__get(i).StaticCast<  ::flixel::_hx_system::debug::TooltipOverlay >()->owner,element );
            				}
            				else {
HXLINE(  41)					_hx_tmp = false;
            				}
HXDLIN(  41)				if (_hx_tmp) {
HXLINE(  43)					 ::flixel::_hx_system::debug::TooltipOverlay tooltip = ::flixel::_hx_system::debug::Tooltip_obj::_tooltips->splice(i,1)->__get(0).StaticCast<  ::flixel::_hx_system::debug::TooltipOverlay >();
HXLINE(  44)					tooltip->destroy();
HXLINE(  45)					removed = true;
HXLINE(  46)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE(  50)		return removed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tooltip_obj,remove,return )


Tooltip_obj::Tooltip_obj()
{
}

bool Tooltip_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tooltips") ) { outValue = ( _tooltips ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { outValue = ( _container ); return true; }
	}
	return false;
}

bool Tooltip_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_tooltips") ) { _tooltips=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=ioValue.Cast<  ::openfl::display::Sprite >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tooltip_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Tooltip_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Tooltip_obj::_tooltips,HX_("_tooltips",6f,ad,20,18)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(void *) &Tooltip_obj::_container,HX_("_container",02,f1,15,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Tooltip_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tooltip_obj::_tooltips,"_tooltips");
	HX_MARK_MEMBER_NAME(Tooltip_obj::_container,"_container");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tooltip_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tooltip_obj::_tooltips,"_tooltips");
	HX_VISIT_MEMBER_NAME(Tooltip_obj::_container,"_container");
};

#endif

::hx::Class Tooltip_obj::__mClass;

static ::String Tooltip_obj_sStaticFields[] = {
	HX_("_tooltips",6f,ad,20,18),
	HX_("_container",02,f1,15,1b),
	HX_("init",10,3b,bb,45),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	::String(null())
};

void Tooltip_obj::__register()
{
	Tooltip_obj _hx_dummy;
	Tooltip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.Tooltip",5b,8d,ac,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tooltip_obj::__GetStatic;
	__mClass->mSetStaticField = &Tooltip_obj::__SetStatic;
	__mClass->mMarkFunc = Tooltip_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tooltip_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tooltip_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tooltip_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tooltip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tooltip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tooltip_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e11c5e295c1ca4dc_18_boot)
HXDLIN(  18)		_tooltips = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
