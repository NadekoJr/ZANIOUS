#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#include <openfl/filters/_BlurFilter/BlurShader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c03b94c358d6de6_319_new,"openfl.filters._BlurFilter.BlurShader","new",0x1c9d0f9f,"openfl.filters._BlurFilter.BlurShader.new","openfl/filters/BlurFilter.hx",319,0x46563eac)
static const Float _hx_array_data_309f542d_1[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4c03b94c358d6de6_328___update,"openfl.filters._BlurFilter.BlurShader","__update",0x96830d8a,"openfl.filters._BlurFilter.BlurShader.__update","openfl/filters/BlurFilter.hx",328,0x46563eac)
namespace openfl{
namespace filters{
namespace _BlurFilter{

void BlurShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4c03b94c358d6de6_319_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("uniform sampler2D openfl_Texture;\n\n\t\tvarying vec2 vBlurCoords[7];\n\n\t\tvoid main(void) {\n\n\t\t\tvec4 sum = vec4(0.0);\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[0]) * 0.00443;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[1]) * 0.05399;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[2]) * 0.24197;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[3]) * 0.39894;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[4]) * 0.24197;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[5]) * 0.05399;\n\t\t\tsum += texture2D(openfl_Texture, vBlurCoords[6]) * 0.00443;\n\n\t\t\tgl_FragColor = sum;\n\n\t\t}",d4,2c,4c,ca);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tuniform mat4 openfl_Matrix;\n\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vBlurCoords[7];\n\t\tuniform vec2 uTextureSize;\n\n\t\tvoid main(void) {\n\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\tvec2 r = uRadius / uTextureSize;\n\t\t\tvBlurCoords[0] = openfl_TextureCoord - r;\n\t\t\tvBlurCoords[1] = openfl_TextureCoord - r * 0.75;\n\t\t\tvBlurCoords[2] = openfl_TextureCoord - r * 0.5;\n\t\t\tvBlurCoords[3] = openfl_TextureCoord;\n\t\t\tvBlurCoords[4] = openfl_TextureCoord + r * 0.5;\n\t\t\tvBlurCoords[5] = openfl_TextureCoord + r * 0.75;\n\t\t\tvBlurCoords[6] = openfl_TextureCoord + r;\n\n\t\t}",45,5b,ba,58);
            		}
HXLINE( 320)		super::__construct(null());
HXLINE( 323)		this->uRadius->value = ::Array_obj< Float >::fromData( _hx_array_data_309f542d_1,2);
HXLINE( 275)		this->_hx___isGenerated = true;
HXDLIN( 275)		this->_hx___initGL();
            	}

Dynamic BlurShader_obj::__CreateEmpty() { return new BlurShader_obj; }

void *BlurShader_obj::_hx_vtable = 0;

Dynamic BlurShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlurShader_obj > _hx_result = new BlurShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x253b4db3) {
		if (inClassId<=(int)0x1415533f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1415533f;
		} else {
			return inClassId==(int)0x253b4db3;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}

void BlurShader_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_4c03b94c358d6de6_328___update)
HXLINE( 330)		this->uTextureSize->value = ::Array_obj< Float >::__new(2)->init(0,this->_hx___texture->input->width)->init(1,this->_hx___texture->input->height);
HXLINE( 333)		this->super::_hx___update();
            	}



::hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__new() {
	::hx::ObjectPtr< BlurShader_obj > __this = new BlurShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlurShader_obj *__this = (BlurShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlurShader_obj), true, "openfl.filters._BlurFilter.BlurShader"));
	*(void **)__this = BlurShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlurShader_obj::BlurShader_obj()
{
}

void BlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurShader);
	HX_MARK_MEMBER_NAME(uRadius,"uRadius");
	HX_MARK_MEMBER_NAME(uTextureSize,"uTextureSize");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uRadius,"uRadius");
	HX_VISIT_MEMBER_NAME(uTextureSize,"uTextureSize");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BlurShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { return ::hx::Val( uRadius ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { return ::hx::Val( uTextureSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlurShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { uRadius=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { uTextureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uRadius",a7,8a,da,e6));
	outFields->push(HX_("uTextureSize",c7,50,82,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlurShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurShader_obj,uRadius),HX_("uRadius",a7,8a,da,e6)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurShader_obj,uTextureSize),HX_("uTextureSize",c7,50,82,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurShader_obj_sMemberFields[] = {
	HX_("__update",29,f1,34,2f),
	HX_("uRadius",a7,8a,da,e6),
	HX_("uTextureSize",c7,50,82,f3),
	::String(null()) };

::hx::Class BlurShader_obj::__mClass;

void BlurShader_obj::__register()
{
	BlurShader_obj _hx_dummy;
	BlurShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._BlurFilter.BlurShader",2d,54,9f,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlurShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlurShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _BlurFilter
