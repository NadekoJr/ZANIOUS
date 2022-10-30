#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#include <animateatlas/AtlasFrameMaker.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#include <animateatlas/displayobject/SpriteMovieClip.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_456b101310759157_26_new,"animateatlas.AtlasFrameMaker","new",0xbc9f8af0,"animateatlas.AtlasFrameMaker.new","animateatlas/AtlasFrameMaker.hx",26,0x273036c1)
HX_LOCAL_STACK_FRAME(_hx_pos_456b101310759157_41_construct,"animateatlas.AtlasFrameMaker","construct",0xd2935ea7,"animateatlas.AtlasFrameMaker.construct","animateatlas/AtlasFrameMaker.hx",41,0x273036c1)
HX_LOCAL_STACK_FRAME(_hx_pos_456b101310759157_85_getFramesArray,"animateatlas.AtlasFrameMaker","getFramesArray",0xd801368d,"animateatlas.AtlasFrameMaker.getFramesArray","animateatlas/AtlasFrameMaker.hx",85,0x273036c1)
namespace animateatlas{

void AtlasFrameMaker_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_456b101310759157_26_new)
HXDLIN(  26)		super::__construct(parent,type,border);
            	}

Dynamic AtlasFrameMaker_obj::__CreateEmpty() { return new AtlasFrameMaker_obj; }

void *AtlasFrameMaker_obj::_hx_vtable = 0;

Dynamic AtlasFrameMaker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AtlasFrameMaker_obj > _hx_result = new AtlasFrameMaker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AtlasFrameMaker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7907b929) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7907b929;
	} else {
		return inClassId==(int)0x7fc39e38;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection AtlasFrameMaker_obj::construct(::String key,::Array< ::String > _excludeArray, ::Dynamic __o_noAntialiasing){
            		 ::Dynamic noAntialiasing = __o_noAntialiasing;
            		if (::hx::IsNull(__o_noAntialiasing)) noAntialiasing = false;
            	HX_GC_STACKFRAME(&_hx_pos_456b101310759157_41_construct)
HXLINE(  46)		::Array< ::Dynamic> frameArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		::String key1 = ((HX_("images/",77,50,74,c1) + key) + HX_("/spritemap1.json",2d,0f,b9,fc));
HXDLIN(  48)		bool _hx_tmp;
HXDLIN(  48)		bool _hx_tmp1;
HXDLIN(  48)		::String key2 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key1);
HXDLIN(  48)		if (::hx::IsNull( key2 )) {
HXLINE(  48)			key2 = HX_("",00,00,00,00);
            		}
HXDLIN(  48)		if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key2)))) {
HXLINE(  48)			::String key = key1;
HXDLIN(  48)			if (::hx::IsNull( key )) {
HXLINE(  48)				key = HX_("",00,00,00,00);
            			}
HXDLIN(  48)			_hx_tmp1 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key));
            		}
            		else {
HXLINE(  48)			_hx_tmp1 = true;
            		}
HXDLIN(  48)		if (_hx_tmp1) {
HXLINE(  48)			_hx_tmp = true;
            		}
            		else {
HXLINE(  48)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key1,HX_("TEXT",ad,94,ba,37),null()),null())) {
HXLINE(  48)				_hx_tmp = true;
            			}
            			else {
HXLINE(  48)				_hx_tmp = false;
            			}
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  50)			::PlayState_obj::instance->addTextToDebug(HX_("Only Spritemaps made with Adobe Animate 2018 are supported",f6,1f,5f,35),-65536);
HXLINE(  51)			::haxe::Log_obj::trace(HX_("Only Spritemaps made with Adobe Animate 2018 are supported",f6,1f,5f,35),::hx::SourceInfo(HX_("source/animateatlas/AtlasFrameMaker.hx",4d,f2,ba,1e),51,HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b),HX_("construct",17,58,ad,4f)));
HXLINE(  52)			return null();
            		}
HXLINE(  55)		 ::Dynamic animationData =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::Paths_obj::getTextFromFile(((HX_("images/",77,50,74,c1) + key) + HX_("/Animation.json",61,fc,54,44)),null()))->doParse();
HXLINE(  56)		 ::Dynamic atlasData =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::StringTools_obj::replace(::Paths_obj::getTextFromFile(((HX_("images/",77,50,74,c1) + key) + HX_("/spritemap.json",ae,2e,a7,76)),null()),HX_W(u"\ufeff",fe53,00b5),HX_("",00,00,00,00)))->doParse();
HXLINE(  58)		::String library = null();
HXDLIN(  58)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(((HX_("",00,00,00,00) + key) + HX_("/spritemap",a8,c1,c8,a3)),library);
HXDLIN(  58)		 ::flixel::graphics::FlxGraphic graphic = returnAsset;
HXLINE(  59)		 ::animateatlas::displayobject::SpriteAnimationLibrary ss =  ::animateatlas::displayobject::SpriteAnimationLibrary_obj::__alloc( HX_CTX ,animationData,atlasData,graphic->bitmap);
HXLINE(  60)		 ::animateatlas::displayobject::SpriteMovieClip t = ss->createAnimation(( (bool)(noAntialiasing) ),null());
HXLINE(  61)		if (::hx::IsNull( _excludeArray )) {
HXLINE(  63)			_excludeArray = t->getFrameLabels();
            		}
HXLINE(  66)		 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN(  66)		::String _hx_tmp3 = (HX_("Creating: ",3f,be,03,b5) + ::Std_obj::string(_excludeArray));
HXDLIN(  66)		_hx_tmp2(_hx_tmp3,::hx::SourceInfo(HX_("source/animateatlas/AtlasFrameMaker.hx",4d,f2,ba,1e),66,HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b),HX_("construct",17,58,ad,4f)));
HXLINE(  45)		 ::flixel::graphics::frames::FlxFramesCollection frameCollection =  ::flixel::graphics::frames::FlxFramesCollection_obj::__alloc( HX_CTX ,graphic,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),null());
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			while((_g < _excludeArray->length)){
HXLINE(  69)				::String x = _excludeArray->__get(_g);
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  71)				frameArray->push(::animateatlas::AtlasFrameMaker_obj::getFramesArray(t,x));
            			}
            		}
HXLINE(  74)		{
HXLINE(  74)			int _g1 = 0;
HXDLIN(  74)			while((_g1 < frameArray->length)){
HXLINE(  74)				::Array< ::Dynamic> x = frameArray->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  74)				_g1 = (_g1 + 1);
HXLINE(  76)				{
HXLINE(  76)					int _g = 0;
HXDLIN(  76)					while((_g < x->length)){
HXLINE(  76)						 ::flixel::graphics::frames::FlxFrame y = x->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN(  76)						_g = (_g + 1);
HXLINE(  78)						frameCollection->pushFrame(y);
            					}
            				}
            			}
            		}
HXLINE(  81)		return frameCollection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AtlasFrameMaker_obj,construct,return )

::Array< ::Dynamic> AtlasFrameMaker_obj::getFramesArray( ::animateatlas::displayobject::SpriteMovieClip t,::String animation){
            	HX_GC_STACKFRAME(&_hx_pos_456b101310759157_85_getFramesArray)
HXLINE(  86)		 ::openfl::geom::Rectangle sizeInfo =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE(  87)		t->set_currentLabel(animation);
HXLINE(  88)		::Array< ::Dynamic> bitMapArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  89)		::Array< ::Dynamic> daFramez = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  90)		bool firstPass = true;
HXLINE(  91)		 ::flixel::math::FlxPoint frameSize =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0);
HXLINE(  93)		{
HXLINE(  93)			int _g = t->getFrame(animation);
HXDLIN(  93)			int _g1 = t->get_numFrames();
HXDLIN(  93)			while((_g < _g1)){
HXLINE(  93)				_g = (_g + 1);
HXDLIN(  93)				int i = (_g - 1);
HXLINE(  95)				t->set_currentFrame(i);
HXLINE(  96)				if ((t->get_currentLabel() == animation)) {
HXLINE(  98)					sizeInfo = t->getBounds(t);
HXLINE(  99)					int bitmapShit = ::Std_obj::_hx_int((sizeInfo->width + sizeInfo->x));
HXDLIN(  99)					 ::openfl::display::BitmapData bitmapShit1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapShit,::Std_obj::_hx_int((sizeInfo->height + sizeInfo->y)),true,0);
HXLINE( 100)					bitmapShit1->draw(t,null(),null(),null(),null(),true);
HXLINE( 101)					bitMapArray->push(bitmapShit1);
HXLINE( 103)					if (firstPass) {
HXLINE( 105)						frameSize->set(bitmapShit1->width,bitmapShit1->height);
HXLINE( 106)						firstPass = false;
            					}
            				}
            				else {
HXLINE( 109)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 112)		{
HXLINE( 112)			int _g2 = 0;
HXDLIN( 112)			int _g3 = bitMapArray->length;
HXDLIN( 112)			while((_g2 < _g3)){
HXLINE( 112)				_g2 = (_g2 + 1);
HXDLIN( 112)				int i = (_g2 - 1);
HXLINE( 114)				 ::flixel::graphics::FlxGraphic b = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >(),null(),null(),null());
HXLINE( 115)				 ::flixel::graphics::frames::FlxFrame theFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,b,null(),null(),null());
HXLINE( 116)				theFrame->parent = b;
HXLINE( 117)				theFrame->name = (animation + i);
HXLINE( 118)				theFrame->sourceSize->set(frameSize->x,frameSize->y);
HXLINE( 119)				theFrame->set_frame( ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->width,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->height));
HXLINE( 120)				daFramez->push(theFrame);
            			}
            		}
HXLINE( 123)		return daFramez;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasFrameMaker_obj,getFramesArray,return )


::hx::ObjectPtr< AtlasFrameMaker_obj > AtlasFrameMaker_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	::hx::ObjectPtr< AtlasFrameMaker_obj > __this = new AtlasFrameMaker_obj();
	__this->__construct(parent,type,border);
	return __this;
}

::hx::ObjectPtr< AtlasFrameMaker_obj > AtlasFrameMaker_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	AtlasFrameMaker_obj *__this = (AtlasFrameMaker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AtlasFrameMaker_obj), true, "animateatlas.AtlasFrameMaker"));
	*(void **)__this = AtlasFrameMaker_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

AtlasFrameMaker_obj::AtlasFrameMaker_obj()
{
}

bool AtlasFrameMaker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"construct") ) { outValue = construct_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFramesArray") ) { outValue = getFramesArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AtlasFrameMaker_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AtlasFrameMaker_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AtlasFrameMaker_obj::__mClass;

static ::String AtlasFrameMaker_obj_sStaticFields[] = {
	HX_("construct",17,58,ad,4f),
	HX_("getFramesArray",1d,07,19,e5),
	::String(null())
};

void AtlasFrameMaker_obj::__register()
{
	AtlasFrameMaker_obj _hx_dummy;
	AtlasFrameMaker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.AtlasFrameMaker",fe,92,eb,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AtlasFrameMaker_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AtlasFrameMaker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AtlasFrameMaker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AtlasFrameMaker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AtlasFrameMaker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace animateatlas
