#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_AnchorPoint
#include <flixel/addons/ui/AnchorPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6681d3195fadcae2_3_new,"flixel.addons.ui.AnchorPoint","new",0x37a3eddc,"flixel.addons.ui.AnchorPoint.new","flixel/addons/ui/AnchorPoint.hx",3,0xb4184ab5)
namespace flixel{
namespace addons{
namespace ui{

void AnchorPoint_obj::__construct(Float Offset,::String Side,::String Flush){
            	HX_STACKFRAME(&_hx_pos_6681d3195fadcae2_3_new)
HXLINE(   7)		this->flush = HX_("center",d5,25,db,05);
HXLINE(   6)		this->side = HX_("center",d5,25,db,05);
HXLINE(   5)		this->offset = ((Float)0);
HXLINE(  11)		this->offset = Offset;
HXLINE(  12)		this->side = Side;
HXLINE(  13)		this->flush = Flush;
            	}

Dynamic AnchorPoint_obj::__CreateEmpty() { return new AnchorPoint_obj; }

void *AnchorPoint_obj::_hx_vtable = 0;

Dynamic AnchorPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnchorPoint_obj > _hx_result = new AnchorPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AnchorPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d6497b0;
}


AnchorPoint_obj::AnchorPoint_obj()
{
}

void AnchorPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnchorPoint);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(side,"side");
	HX_MARK_MEMBER_NAME(flush,"flush");
	HX_MARK_END_CLASS();
}

void AnchorPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(side,"side");
	HX_VISIT_MEMBER_NAME(flush,"flush");
}

::hx::Val AnchorPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnchorPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { side=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { flush=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnchorPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("side",97,8d,53,4c));
	outFields->push(HX_("flush",c4,62,9b,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnchorPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(AnchorPoint_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsString,(int)offsetof(AnchorPoint_obj,side),HX_("side",97,8d,53,4c)},
	{::hx::fsString,(int)offsetof(AnchorPoint_obj,flush),HX_("flush",c4,62,9b,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnchorPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String AnchorPoint_obj_sMemberFields[] = {
	HX_("offset",93,97,3f,60),
	HX_("side",97,8d,53,4c),
	HX_("flush",c4,62,9b,02),
	::String(null()) };

::hx::Class AnchorPoint_obj::__mClass;

void AnchorPoint_obj::__register()
{
	AnchorPoint_obj _hx_dummy;
	AnchorPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.AnchorPoint",ea,0f,f1,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnchorPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnchorPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnchorPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnchorPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
