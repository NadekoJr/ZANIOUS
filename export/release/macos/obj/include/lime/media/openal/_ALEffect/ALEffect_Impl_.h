#ifndef INCLUDED_lime_media_openal__ALEffect_ALEffect_Impl_
#define INCLUDED_lime_media_openal__ALEffect_ALEffect_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,openal,_ALEffect,ALEffect_Impl_)

namespace lime{
namespace media{
namespace openal{
namespace _ALEffect{


class HXCPP_CLASS_ATTRIBUTES ALEffect_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ALEffect_Impl__obj OBJ_;
		ALEffect_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0051d1ab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.openal._ALEffect.ALEffect_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.openal._ALEffect.ALEffect_Impl_"); }

		inline static ::hx::ObjectPtr< ALEffect_Impl__obj > __new() {
			::hx::ObjectPtr< ALEffect_Impl__obj > __this = new ALEffect_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ALEffect_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ALEffect_Impl__obj *__this = (ALEffect_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ALEffect_Impl__obj), false, "lime.media.openal._ALEffect.ALEffect_Impl_"));
			*(void **)__this = ALEffect_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ALEffect_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALEffect_Impl_",7c,13,0e,4e); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALEffect

#endif /* INCLUDED_lime_media_openal__ALEffect_ALEffect_Impl_ */ 
