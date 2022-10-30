#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Rating
#include <Rating.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9bd24c9adde08dff_33_new,"Conductor","new",0xc2a20839,"Conductor.new","Conductor.hx",33,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_37_judgeNote,"Conductor","judgeNote",0x11872bc2,"Conductor.judgeNote","Conductor.hx",37,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_49_getCrotchetAtTime,"Conductor","getCrotchetAtTime",0x706a6377,"Conductor.getCrotchetAtTime","Conductor.hx",49,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_54_getBPMFromSeconds,"Conductor","getBPMFromSeconds",0xa9f45e65,"Conductor.getBPMFromSeconds","Conductor.hx",54,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_70_getBPMFromStep,"Conductor","getBPMFromStep",0xaac1f3a6,"Conductor.getBPMFromStep","Conductor.hx",70,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_86_beatToSeconds,"Conductor","beatToSeconds",0xbb91ef07,"Conductor.beatToSeconds","Conductor.hx",86,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_92_getStep,"Conductor","getStep",0x1c082f5b,"Conductor.getStep","Conductor.hx",92,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_97_getStepRounded,"Conductor","getStepRounded",0xe73aea12,"Conductor.getStepRounded","Conductor.hx",97,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_103_getBeat,"Conductor","getBeat",0x10c02985,"Conductor.getBeat","Conductor.hx",103,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_107_getBeatRounded,"Conductor","getBeatRounded",0xad1ce928,"Conductor.getBeatRounded","Conductor.hx",107,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_111_mapBPMChanges,"Conductor","mapBPMChanges",0x401caab9,"Conductor.mapBPMChanges","Conductor.hx",111,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_139_getSectionBeats,"Conductor","getSectionBeats",0xac87c127,"Conductor.getSectionBeats","Conductor.hx",139,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_146_calculateCrochet,"Conductor","calculateCrochet",0x4b2994f5,"Conductor.calculateCrochet","Conductor.hx",146,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_150_changeBPM,"Conductor","changeBPM",0xeafb6fe8,"Conductor.changeBPM","Conductor.hx",150,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_20_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",20,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_21_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",21,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_22_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",22,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_23_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",23,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_25_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",25,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_28_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",28,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_30_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",30,0xeb0fa157)

void Conductor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_33_new)
            	}

Dynamic Conductor_obj::__CreateEmpty() { return new Conductor_obj; }

void *Conductor_obj::_hx_vtable = 0;

Dynamic Conductor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conductor_obj > _hx_result = new Conductor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Conductor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ee4ed07;
}

Float Conductor_obj::bpm;

Float Conductor_obj::crochet;

Float Conductor_obj::stepCrochet;

Float Conductor_obj::songPosition;

Float Conductor_obj::lastSongPos;

Float Conductor_obj::offset;

Float Conductor_obj::safeZoneOffset;

::Array< ::Dynamic> Conductor_obj::bpmChangeMap;

 ::Rating Conductor_obj::judgeNote( ::Note note,::hx::Null< Float >  __o_diff){
            		Float diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_37_judgeNote)
HXLINE(  38)		::Array< ::Dynamic> data = ::PlayState_obj::instance->ratingsData;
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			int _g1 = (data->length - 1);
HXDLIN(  39)			while((_g < _g1)){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int i = (_g - 1);
HXLINE(  41)				if (::hx::IsLessEq( diff,data->__get(i).StaticCast<  ::Rating >()->hitWindow )) {
HXLINE(  43)					return data->__get(i).StaticCast<  ::Rating >();
            				}
            			}
            		}
HXLINE(  46)		return data->__get((data->length - 1)).StaticCast<  ::Rating >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conductor_obj,judgeNote,return )

Float Conductor_obj::getCrotchetAtTime(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_49_getCrotchetAtTime)
HXLINE(  50)		 ::Dynamic lastChange = ::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  51)		return (( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) ) * ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getCrotchetAtTime,return )

 ::Dynamic Conductor_obj::getBPMFromSeconds(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_54_getBPMFromSeconds)
HXLINE(  55)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),::Conductor_obj::stepCrochet)
            			->setFixed(2,HX_("bpm",df,be,4a,00),::Conductor_obj::bpm)
            			->setFixed(3,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  61)			while((_g < _g1)){
HXLINE(  61)				_g = (_g + 1);
HXDLIN(  61)				int i = (_g - 1);
HXLINE(  63)				if (::hx::IsGreaterEq( time,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  64)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  67)		return lastChange;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBPMFromSeconds,return )

 ::Dynamic Conductor_obj::getBPMFromStep(Float step){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_70_getBPMFromStep)
HXLINE(  71)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),::Conductor_obj::stepCrochet)
            			->setFixed(2,HX_("bpm",df,be,4a,00),::Conductor_obj::bpm)
            			->setFixed(3,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  77)			while((_g < _g1)){
HXLINE(  77)				_g = (_g + 1);
HXDLIN(  77)				int i = (_g - 1);
HXLINE(  79)				if (::hx::IsLessEq( ::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic),step )) {
HXLINE(  80)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  83)		return lastChange;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBPMFromStep,return )

Float Conductor_obj::beatToSeconds(Float beat){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_86_beatToSeconds)
HXLINE(  87)		Float step = (beat * ( (Float)(4) ));
HXLINE(  88)		 ::Dynamic lastChange = ::Conductor_obj::getBPMFromStep(step);
HXLINE(  89)		return ( (Float)((lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) + ((((step - ( (Float)(lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic)) )) / (( (Float)(lastChange->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) / ( (Float)(4) )) * ( (Float)(1000) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,beatToSeconds,return )

Float Conductor_obj::getStep(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_92_getStep)
HXLINE(  93)		 ::Dynamic lastChange = ::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  94)		return ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ((time - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getStep,return )

Float Conductor_obj::getStepRounded(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_97_getStepRounded)
HXLINE(  98)		 ::Dynamic lastChange = ::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  99)		return ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + (( (Float)(::Math_obj::floor((time - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )))) ) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getStepRounded,return )

Float Conductor_obj::getBeat(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_103_getBeat)
HXDLIN( 103)		return (::Conductor_obj::getStep(time) / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBeat,return )

int Conductor_obj::getBeatRounded(Float time){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_107_getBeatRounded)
HXDLIN( 107)		return ::Math_obj::floor((::Conductor_obj::getStepRounded(time) / ( (Float)(4) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBeatRounded,return )

void Conductor_obj::mapBPMChanges( ::Dynamic song){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_111_mapBPMChanges)
HXLINE( 112)		::Conductor_obj::bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 114)		Float curBPM = ( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 115)		int totalSteps = 0;
HXLINE( 116)		Float totalPos = ( (Float)(0) );
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			int _g1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN( 117)			while((_g < _g1)){
HXLINE( 117)				_g = (_g + 1);
HXDLIN( 117)				int i = (_g - 1);
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if (( (bool)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("changeBPM",4f,4f,f8,1d),::hx::paccDynamic)) )) {
HXLINE( 119)					_hx_tmp = ::hx::IsNotEq(  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic),curBPM );
            				}
            				else {
HXLINE( 119)					_hx_tmp = false;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 121)					curBPM = ( (Float)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 122)					 ::Dynamic event =  ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("stepTime",79,75,25,a0),totalSteps)
            						->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),(((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )))
            						->setFixed(2,HX_("bpm",df,be,4a,00),curBPM)
            						->setFixed(3,HX_("songTime",82,2a,d5,3a),totalPos));
HXLINE( 128)					::Conductor_obj::bpmChangeMap->push(event);
            				}
HXLINE( 131)				int deltaSteps = ::Math_obj::round((( (Float)(::Conductor_obj::getSectionBeats(song,i)) ) * ( (Float)(4) )));
HXLINE( 132)				totalSteps = (totalSteps + deltaSteps);
HXLINE( 133)				totalPos = (totalPos + ((((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )) * ( (Float)(deltaSteps) )));
            			}
            		}
HXLINE( 135)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 135)		::String _hx_tmp1 = (HX_("new BPM map BUDDY ",ff,cc,e3,2e) + ::Std_obj::string(::Conductor_obj::bpmChangeMap));
HXDLIN( 135)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Conductor.hx",4b,4e,2d,f0),135,HX_("Conductor",c7,77,a1,7b),HX_("mapBPMChanges",a0,c9,ba,4a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,mapBPMChanges,(void))

 ::Dynamic Conductor_obj::getSectionBeats( ::Dynamic song,int section){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_139_getSectionBeats)
HXLINE( 140)		 ::Dynamic val = null();
HXLINE( 141)		if (::hx::IsNotNull(  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(section) )) {
HXLINE( 141)			val =  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(section)->__Field(HX_("sectionBeats",18,52,2e,0f),::hx::paccDynamic);
            		}
HXLINE( 142)		if (::hx::IsNotNull( val )) {
HXLINE( 142)			return val;
            		}
            		else {
HXLINE( 142)			return 4;
            		}
HXDLIN( 142)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conductor_obj,getSectionBeats,return )

Float Conductor_obj::calculateCrochet(Float bpm){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_146_calculateCrochet)
HXDLIN( 146)		return ((( (Float)(60) ) / bpm) * ( (Float)(1000) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,calculateCrochet,return )

void Conductor_obj::changeBPM(Float newBpm){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_150_changeBPM)
HXLINE( 151)		::Conductor_obj::bpm = newBpm;
HXLINE( 153)		::Conductor_obj::crochet = ((( (Float)(60) ) / ::Conductor_obj::bpm) * ( (Float)(1000) ));
HXLINE( 154)		::Conductor_obj::stepCrochet = (::Conductor_obj::crochet / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,changeBPM,(void))


Conductor_obj::Conductor_obj()
{
}

bool Conductor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { outValue = ( bpm ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = ( offset ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { outValue = ( crochet ); return true; }
		if (HX_FIELD_EQ(inName,"getStep") ) { outValue = getStep_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBeat") ) { outValue = getBeat_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"judgeNote") ) { outValue = judgeNote_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"changeBPM") ) { outValue = changeBPM_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { outValue = ( stepCrochet ); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { outValue = ( lastSongPos ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { outValue = ( songPosition ); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { outValue = ( bpmChangeMap ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"beatToSeconds") ) { outValue = beatToSeconds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mapBPMChanges") ) { outValue = mapBPMChanges_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { outValue = ( safeZoneOffset ); return true; }
		if (HX_FIELD_EQ(inName,"getBPMFromStep") ) { outValue = getBPMFromStep_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getStepRounded") ) { outValue = getStepRounded_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBeatRounded") ) { outValue = getBeatRounded_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSectionBeats") ) { outValue = getSectionBeats_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calculateCrochet") ) { outValue = calculateCrochet_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCrotchetAtTime") ) { outValue = getCrotchetAtTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBPMFromSeconds") ) { outValue = getBPMFromSeconds_dyn(); return true; }
	}
	return false;
}

bool Conductor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=ioValue.Cast< Float >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { crochet=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { stepCrochet=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { lastSongPos=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { songPosition=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { bpmChangeMap=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { safeZoneOffset=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Conductor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Conductor_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Conductor_obj::bpm,HX_("bpm",df,be,4a,00)},
	{::hx::fsFloat,(void *) &Conductor_obj::crochet,HX_("crochet",34,d5,b5,d4)},
	{::hx::fsFloat,(void *) &Conductor_obj::stepCrochet,HX_("stepCrochet",48,d7,ff,e6)},
	{::hx::fsFloat,(void *) &Conductor_obj::songPosition,HX_("songPosition",9e,dd,3b,8d)},
	{::hx::fsFloat,(void *) &Conductor_obj::lastSongPos,HX_("lastSongPos",09,f9,d2,5e)},
	{::hx::fsFloat,(void *) &Conductor_obj::offset,HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(void *) &Conductor_obj::safeZoneOffset,HX_("safeZoneOffset",8c,9a,25,8d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Conductor_obj::bpmChangeMap,HX_("bpmChangeMap",2d,84,1f,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Conductor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_MARK_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_MARK_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_MARK_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_MARK_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_MARK_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Conductor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_VISIT_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_VISIT_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_VISIT_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#endif

::hx::Class Conductor_obj::__mClass;

static ::String Conductor_obj_sStaticFields[] = {
	HX_("bpm",df,be,4a,00),
	HX_("crochet",34,d5,b5,d4),
	HX_("stepCrochet",48,d7,ff,e6),
	HX_("songPosition",9e,dd,3b,8d),
	HX_("lastSongPos",09,f9,d2,5e),
	HX_("offset",93,97,3f,60),
	HX_("safeZoneOffset",8c,9a,25,8d),
	HX_("bpmChangeMap",2d,84,1f,2c),
	HX_("judgeNote",29,0b,84,44),
	HX_("getCrotchetAtTime",de,81,ff,28),
	HX_("getBPMFromSeconds",cc,7c,89,62),
	HX_("getBPMFromStep",df,de,7e,ea),
	HX_("beatToSeconds",ee,0d,30,c6),
	HX_("getStep",02,97,de,1e),
	HX_("getStepRounded",4b,d5,f7,26),
	HX_("getBeat",2c,91,96,13),
	HX_("getBeatRounded",61,d4,d9,ec),
	HX_("mapBPMChanges",a0,c9,ba,4a),
	HX_("getSectionBeats",ce,a7,18,32),
	HX_("calculateCrochet",6e,80,62,a4),
	HX_("changeBPM",4f,4f,f8,1d),
	::String(null())
};

void Conductor_obj::__register()
{
	Conductor_obj _hx_dummy;
	Conductor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Conductor",c7,77,a1,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Conductor_obj::__GetStatic;
	__mClass->mSetStaticField = &Conductor_obj::__SetStatic;
	__mClass->mMarkFunc = Conductor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Conductor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Conductor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Conductor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conductor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conductor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Conductor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_20_boot)
HXDLIN(  20)		bpm = ((Float)100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_21_boot)
HXDLIN(  21)		crochet = ((( (Float)(60) ) / ::Conductor_obj::bpm) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_22_boot)
HXDLIN(  22)		stepCrochet = (::Conductor_obj::crochet / ( (Float)(4) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_23_boot)
HXDLIN(  23)		songPosition = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_25_boot)
HXDLIN(  25)		offset = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_28_boot)
HXDLIN(  28)		safeZoneOffset = ((::ClientPrefs_obj::safeFrames / ( (Float)(60) )) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_30_boot)
HXDLIN(  30)		bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

