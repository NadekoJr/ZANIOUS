#ifndef INCLUDED_TankmenBG
#define INCLUDED_TankmenBG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(TankmenBG)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TankmenBG_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef TankmenBG_obj OBJ_;
		TankmenBG_obj();

	public:
		enum { _hx_ClassId = 0x52c34351 };

		void __construct(Float x,Float y,bool facingRight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TankmenBG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TankmenBG"); }
		static ::hx::ObjectPtr< TankmenBG_obj > __new(Float x,Float y,bool facingRight);
		static ::hx::ObjectPtr< TankmenBG_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,bool facingRight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TankmenBG_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TankmenBG",11,ce,7f,8f); }

		static void __boot();
		static ::cpp::VirtualArray animationNotes;
		Float tankSpeed;
		Float endingOffset;
		bool goingRight;
		Float strumTime;
		void resetShit(Float x,Float y,bool goingRight);
		::Dynamic resetShit_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_TankmenBG */ 
