#ifndef INCLUDED_openfl_net_NetConnection
#define INCLUDED_openfl_net_NetConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,NetConnection)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES NetConnection_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NetConnection_obj OBJ_;
		NetConnection_obj();

	public:
		enum { _hx_ClassId = 0x4bdf014e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.NetConnection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.NetConnection"); }
		static ::hx::ObjectPtr< NetConnection_obj > __new();
		static ::hx::ObjectPtr< NetConnection_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetConnection_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetConnection",bb,ba,b8,81); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String CONNECT_SUCCESS;
		void connect(::String command, ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5);
		::Dynamic connect_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_NetConnection */ 
