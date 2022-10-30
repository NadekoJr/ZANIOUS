#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_display__ShaderData_ShaderData_Impl_
#include <openfl/display/_ShaderData/ShaderData_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4b006e5218f2daf8_261_new,"openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",261,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_271___clearUseArray,"openfl.display.Shader","__clearUseArray",0xbc4a9c00,"openfl.display.Shader.__clearUseArray","openfl/display/Shader.hx",271,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_319___createGLShader,"openfl.display.Shader","__createGLShader",0xd8186585,"openfl.display.Shader.__createGLShader","openfl/display/Shader.hx",319,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_338___createGLProgram,"openfl.display.Shader","__createGLProgram",0xd1b33824,"openfl.display.Shader.__createGLProgram","openfl/display/Shader.hx",338,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_372___disable,"openfl.display.Shader","__disable",0x171f2ca9,"openfl.display.Shader.__disable","openfl/display/Shader.hx",372,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_379___disableGL,"openfl.display.Shader","__disableGL",0x7ec2a70e,"openfl.display.Shader.__disableGL","openfl/display/Shader.hx",379,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_416___enable,"openfl.display.Shader","__enable",0x8f5f3ee2,"openfl.display.Shader.__enable","openfl/display/Shader.hx",416,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_426___enableGL,"openfl.display.Shader","__enableGL",0x94d67987,"openfl.display.Shader.__enableGL","openfl/display/Shader.hx",426,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_446___init,"openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",446,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_459___initGL,"openfl.display.Shader","__initGL",0x2e23ed94,"openfl.display.Shader.__initGL","openfl/display/Shader.hx",459,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_566___processGLData,"openfl.display.Shader","__processGLData",0x90b8a01f,"openfl.display.Shader.__processGLData","openfl/display/Shader.hx",566,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_727___update,"openfl.display.Shader","__update",0x1ddd1668,"openfl.display.Shader.__update","openfl/display/Shader.hx",727,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_735___updateFromBuffer,"openfl.display.Shader","__updateFromBuffer",0x7639ee92,"openfl.display.Shader.__updateFromBuffer","openfl/display/Shader.hx",735,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_742___updateGL,"openfl.display.Shader","__updateGL",0x201dbe8d,"openfl.display.Shader.__updateGL","openfl/display/Shader.hx",742,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_768___updateGLFromBuffer,"openfl.display.Shader","__updateGLFromBuffer",0x5f0216f7,"openfl.display.Shader.__updateGLFromBuffer","openfl/display/Shader.hx",768,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_905_get_data,"openfl.display.Shader","get_data",0xb0c636f2,"openfl.display.Shader.get_data","openfl/display/Shader.hx",905,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_916_set_data,"openfl.display.Shader","set_data",0x5f239066,"openfl.display.Shader.set_data","openfl/display/Shader.hx",916,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_921_get_glFragmentSource,"openfl.display.Shader","get_glFragmentSource",0x5d5fb298,"openfl.display.Shader.get_glFragmentSource","openfl/display/Shader.hx",921,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_925_set_glFragmentSource,"openfl.display.Shader","set_glFragmentSource",0x2a176a0c,"openfl.display.Shader.set_glFragmentSource","openfl/display/Shader.hx",925,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_936_get_glVertexSource,"openfl.display.Shader","get_glVertexSource",0xa3c917ec,"openfl.display.Shader.get_glVertexSource","openfl/display/Shader.hx",936,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_940_set_glVertexSource,"openfl.display.Shader","set_glVertexSource",0x80784a60,"openfl.display.Shader.set_glVertexSource","openfl/display/Shader.hx",940,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_124_boot,"openfl.display.Shader","boot",0x4b5a5df1,"openfl.display.Shader.boot","openfl/display/Shader.hx",124,0xae8f5dcd)
namespace openfl{
namespace display{

void Shader_obj::__construct( ::openfl::utils::ByteArrayData code){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_261_new)
HXLINE( 262)		this->byteCode = code;
HXLINE( 263)		this->precisionHint = 1;
HXLINE( 265)		this->_hx___glSourceDirty = true;
HXLINE( 266)		this->_hx___numPasses = 1;
HXLINE( 267)		this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(code);
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78d8d737;
}

void Shader_obj::_hx___clearUseArray(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_271___clearUseArray)
HXLINE( 272)		{
HXLINE( 272)			int _g = 0;
HXDLIN( 272)			::Array< ::Dynamic> _g1 = this->_hx___paramBool;
HXDLIN( 272)			while((_g < _g1->length)){
HXLINE( 272)				 ::openfl::display::ShaderParameter_Bool parameter = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 272)				_g = (_g + 1);
HXLINE( 274)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 277)		{
HXLINE( 277)			int _g2 = 0;
HXDLIN( 277)			::Array< ::Dynamic> _g3 = this->_hx___paramFloat;
HXDLIN( 277)			while((_g2 < _g3->length)){
HXLINE( 277)				 ::openfl::display::ShaderParameter_Float parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 277)				_g2 = (_g2 + 1);
HXLINE( 279)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 282)		{
HXLINE( 282)			int _g4 = 0;
HXDLIN( 282)			::Array< ::Dynamic> _g5 = this->_hx___paramInt;
HXDLIN( 282)			while((_g4 < _g5->length)){
HXLINE( 282)				 ::openfl::display::ShaderParameter_Int parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 282)				_g4 = (_g4 + 1);
HXLINE( 284)				parameter->_hx___useArray = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___clearUseArray,(void))

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLShader(::String source,int type){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_319___createGLShader)
HXLINE( 320)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 322)		 ::lime::graphics::opengl::GLObject shader = gl->createShader(type);
HXLINE( 323)		gl->shaderSource(shader,source);
HXLINE( 324)		gl->compileShader(shader);
HXLINE( 326)		if (::hx::IsEq( gl->getShaderParameter(shader,gl->COMPILE_STATUS),0 )) {
HXLINE( 328)			::String message;
HXDLIN( 328)			if ((type == gl->VERTEX_SHADER)) {
HXLINE( 328)				message = HX_("Error compiling vertex shader",39,c9,c1,b2);
            			}
            			else {
HXLINE( 328)				message = HX_("Error compiling fragment shader",4d,d0,be,e3);
            			}
HXLINE( 329)			message = (message + (HX_("\n",0a,00,00,00) + gl->getShaderInfoLog(shader)));
HXLINE( 330)			message = (message + (HX_("\n",0a,00,00,00) + source));
HXLINE( 331)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),331,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLShader",46,69,da,33)));
            		}
HXLINE( 334)		return shader;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLShader,return )

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLProgram(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_338___createGLProgram)
HXLINE( 339)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 341)		 ::lime::graphics::opengl::GLObject vertexShader = this->_hx___createGLShader(vertexSource,gl->VERTEX_SHADER);
HXLINE( 342)		 ::lime::graphics::opengl::GLObject fragmentShader = this->_hx___createGLShader(fragmentSource,gl->FRAGMENT_SHADER);
HXLINE( 344)		 ::lime::graphics::opengl::GLObject program = gl->createProgram();
HXLINE( 347)		{
HXLINE( 347)			int _g = 0;
HXDLIN( 347)			::Array< ::Dynamic> _g1 = this->_hx___paramFloat;
HXDLIN( 347)			while((_g < _g1->length)){
HXLINE( 347)				 ::openfl::display::ShaderParameter_Float param = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 347)				_g = (_g + 1);
HXLINE( 349)				bool _hx_tmp;
HXDLIN( 349)				if ((param->name.indexOf(HX_("Position",c9,5c,ac,a4),null()) > -1)) {
HXLINE( 349)					_hx_tmp = ::StringTools_obj::startsWith(param->name,HX_("openfl_",cf,ba,42,40));
            				}
            				else {
HXLINE( 349)					_hx_tmp = false;
            				}
HXDLIN( 349)				if (_hx_tmp) {
HXLINE( 351)					gl->bindAttribLocation(program,0,param->name);
HXLINE( 352)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 356)		gl->attachShader(program,vertexShader);
HXLINE( 357)		gl->attachShader(program,fragmentShader);
HXLINE( 358)		gl->linkProgram(program);
HXLINE( 360)		if (::hx::IsEq( gl->getProgramParameter(program,gl->LINK_STATUS),0 )) {
HXLINE( 362)			::String message = HX_("Unable to initialize the shader program",f0,86,8b,39);
HXLINE( 363)			message = (message + (HX_("\n",0a,00,00,00) + gl->getProgramInfoLog(program)));
HXLINE( 364)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),364,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLProgram",43,7d,b4,bf)));
            		}
HXLINE( 367)		return program;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLProgram,return )

void Shader_obj::_hx___disable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_372___disable)
HXDLIN( 372)		if (::hx::IsNotNull( this->program )) {
HXLINE( 374)			this->_hx___disableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disable,(void))

void Shader_obj::_hx___disableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_379___disableGL)
HXLINE( 380)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 382)		int textureCount = 0;
HXLINE( 384)		{
HXLINE( 384)			int _g = 0;
HXDLIN( 384)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 384)			while((_g < _g1->length)){
HXLINE( 384)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 384)				_g = (_g + 1);
HXLINE( 386)				input->_hx___disableGL(this->_hx___context,textureCount);
HXLINE( 387)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 390)		{
HXLINE( 390)			int _g2 = 0;
HXDLIN( 390)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 390)			while((_g2 < _g3->length)){
HXLINE( 390)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 390)				_g2 = (_g2 + 1);
HXLINE( 392)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 395)		{
HXLINE( 395)			int _g4 = 0;
HXDLIN( 395)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 395)			while((_g4 < _g5->length)){
HXLINE( 395)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 395)				_g4 = (_g4 + 1);
HXLINE( 397)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 400)		{
HXLINE( 400)			int _g6 = 0;
HXDLIN( 400)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 400)			while((_g6 < _g7->length)){
HXLINE( 400)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 400)				_g6 = (_g6 + 1);
HXLINE( 402)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 405)		this->_hx___context->_hx___bindGLArrayBuffer(null());
HXLINE( 408)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 410)			gl->disable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disableGL,(void))

void Shader_obj::_hx___enable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_416___enable)
HXLINE( 417)		this->_hx___init();
HXLINE( 419)		if (::hx::IsNotNull( this->program )) {
HXLINE( 421)			this->_hx___enableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enable,(void))

void Shader_obj::_hx___enableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_426___enableGL)
HXLINE( 427)		int textureCount = 0;
HXLINE( 429)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 431)		{
HXLINE( 431)			int _g = 0;
HXDLIN( 431)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 431)			while((_g < _g1->length)){
HXLINE( 431)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 431)				_g = (_g + 1);
HXLINE( 433)				gl->uniform1i(( (int)(input->index) ),textureCount);
HXLINE( 434)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 438)			_hx_tmp = (textureCount > 0);
            		}
            		else {
HXLINE( 438)			_hx_tmp = false;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 440)			gl->enable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enableGL,(void))

void Shader_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_446___init)
HXLINE( 447)		if (::hx::IsNull( this->_hx___data )) {
HXLINE( 449)			this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(null());
            		}
HXLINE( 452)		bool _hx_tmp;
HXDLIN( 452)		bool _hx_tmp1;
HXDLIN( 452)		if (::hx::IsNotNull( this->_hx___glFragmentSource )) {
HXLINE( 452)			_hx_tmp1 = ::hx::IsNotNull( this->_hx___glVertexSource );
            		}
            		else {
HXLINE( 452)			_hx_tmp1 = false;
            		}
HXDLIN( 452)		if (_hx_tmp1) {
HXLINE( 452)			if (::hx::IsNotNull( this->program )) {
HXLINE( 452)				_hx_tmp = this->_hx___glSourceDirty;
            			}
            			else {
HXLINE( 452)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 452)			_hx_tmp = false;
            		}
HXDLIN( 452)		if (_hx_tmp) {
HXLINE( 454)			this->_hx___initGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___init,(void))

void Shader_obj::_hx___initGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_459___initGL)
HXLINE( 460)		bool _hx_tmp;
HXDLIN( 460)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 460)			_hx_tmp = ::hx::IsNull( this->_hx___paramBool );
            		}
            		else {
HXLINE( 460)			_hx_tmp = true;
            		}
HXDLIN( 460)		if (_hx_tmp) {
HXLINE( 462)			this->_hx___glSourceDirty = false;
HXLINE( 463)			this->program = null();
HXLINE( 465)			this->_hx___inputBitmapData = ::Array_obj< ::Dynamic>::__new();
HXLINE( 466)			this->_hx___paramBool = ::Array_obj< ::Dynamic>::__new();
HXLINE( 467)			this->_hx___paramFloat = ::Array_obj< ::Dynamic>::__new();
HXLINE( 468)			this->_hx___paramInt = ::Array_obj< ::Dynamic>::__new();
HXLINE( 470)			this->_hx___processGLData(this->get_glVertexSource(),HX_("attribute",1c,70,f0,fa));
HXLINE( 471)			this->_hx___processGLData(this->get_glVertexSource(),HX_("uniform",34,41,64,b5));
HXLINE( 472)			this->_hx___processGLData(this->get_glFragmentSource(),HX_("uniform",34,41,64,b5));
            		}
HXLINE( 475)		bool _hx_tmp1;
HXDLIN( 475)		if (::hx::IsNotNull( this->_hx___context )) {
HXLINE( 475)			_hx_tmp1 = ::hx::IsNull( this->program );
            		}
            		else {
HXLINE( 475)			_hx_tmp1 = false;
            		}
HXDLIN( 475)		if (_hx_tmp1) {
HXLINE( 477)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 481)			::String prefix;
HXDLIN( 481)			if (::hx::IsEq( this->precisionHint,1 )) {
HXLINE( 481)				prefix = HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n\t\t\t\tprecision highp float;\n\t\t\t\t#else\n\t\t\t\tprecision mediump float;\n\t\t\t\t#endif",4b,73,c6,16);
            			}
            			else {
HXLINE( 481)				prefix = HX_("precision lowp float;",81,5f,ad,9a);
            			}
HXLINE( 479)			::String prefix1 = ((HX_("#ifdef GL_ES\n\t\t\t\t",7d,b3,ff,2f) + prefix) + HX_("\n\t\t\t\t#endif\n\t\t\t\t",ab,2a,3b,b6));
HXLINE( 490)			::String vertex = (prefix1 + this->get_glVertexSource());
HXLINE( 491)			::String fragment = (prefix1 + this->get_glFragmentSource());
HXLINE( 493)			::String id = (vertex + fragment);
HXLINE( 495)			if (this->_hx___context->_hx___programs->exists(id)) {
HXLINE( 497)				this->program = ( ( ::openfl::display3D::Program3D)(this->_hx___context->_hx___programs->get(id)) );
            			}
            			else {
HXLINE( 501)				this->program = this->_hx___context->createProgram(1);
HXLINE( 505)				this->program->_hx___glProgram = this->_hx___createGLProgram(vertex,fragment);
HXLINE( 507)				this->_hx___context->_hx___programs->set(id,this->program);
            			}
HXLINE( 510)			if (::hx::IsNotNull( this->program )) {
HXLINE( 512)				this->glProgram = this->program->_hx___glProgram;
HXLINE( 514)				{
HXLINE( 514)					int _g = 0;
HXDLIN( 514)					::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 514)					while((_g < _g1->length)){
HXLINE( 514)						 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 514)						_g = (_g + 1);
HXLINE( 516)						if (input->_hx___isUniform) {
HXLINE( 518)							input->index = gl->getUniformLocation(this->glProgram,input->name);
            						}
            						else {
HXLINE( 522)							input->index = gl->getAttribLocation(this->glProgram,input->name);
            						}
            					}
            				}
HXLINE( 526)				{
HXLINE( 526)					int _g2 = 0;
HXDLIN( 526)					::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 526)					while((_g2 < _g3->length)){
HXLINE( 526)						 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 526)						_g2 = (_g2 + 1);
HXLINE( 528)						if (parameter->_hx___isUniform) {
HXLINE( 530)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 534)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 538)				{
HXLINE( 538)					int _g4 = 0;
HXDLIN( 538)					::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 538)					while((_g4 < _g5->length)){
HXLINE( 538)						 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 538)						_g4 = (_g4 + 1);
HXLINE( 540)						if (parameter->_hx___isUniform) {
HXLINE( 542)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 546)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 550)				{
HXLINE( 550)					int _g6 = 0;
HXDLIN( 550)					::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 550)					while((_g6 < _g7->length)){
HXLINE( 550)						 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 550)						_g6 = (_g6 + 1);
HXLINE( 552)						if (parameter->_hx___isUniform) {
HXLINE( 554)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 558)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___initGL,(void))

void Shader_obj::_hx___processGLData(::String source,::String storageType){
            	HX_GC_STACKFRAME(&_hx_pos_4b006e5218f2daf8_566___processGLData)
HXLINE( 567)		int lastMatch = 0;
HXDLIN( 567)		 ::Dynamic position;
HXDLIN( 567)		 ::EReg regex;
HXDLIN( 567)		::String name;
HXDLIN( 567)		::String type;
HXLINE( 569)		if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 571)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("uniform ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",e3,a8,c0,f8),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 575)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("attribute ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",fb,2e,25,cc),HX_("",00,00,00,00));
            		}
HXLINE( 578)		while(regex->matchSub(source,lastMatch,null())){
HXLINE( 580)			type = regex->matched(1);
HXLINE( 581)			name = regex->matched(2);
HXLINE( 583)			if (::StringTools_obj::startsWith(name,HX_("gl_",9a,86,4e,00))) {
HXLINE( 585)				continue;
            			}
HXLINE( 588)			bool isUniform = (storageType == HX_("uniform",34,41,64,b5));
HXLINE( 590)			if (::StringTools_obj::startsWith(type,HX_("sampler",08,c5,c9,83))) {
HXLINE( 592)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input =  ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 593)				input->name = name;
HXLINE( 594)				input->_hx___isUniform = isUniform;
HXLINE( 595)				this->_hx___inputBitmapData->push(input);
HXLINE( 597)				::String _hx_switch_0 = name;
            				if (  (_hx_switch_0==HX_("bitmap",ef,0f,0c,f1)) ){
HXLINE( 602)					this->_hx___bitmap = input;
HXDLIN( 602)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("openfl_Texture",cc,bd,e4,7e)) ){
HXLINE( 600)					this->_hx___texture = input;
HXDLIN( 600)					goto _hx_goto_24;
            				}
            				/* default */{
            				}
            				_hx_goto_24:;
HXLINE( 606)				::Reflect_obj::setField(this->_hx___data,name,input);
HXLINE( 607)				if (this->_hx___isGenerated) {
HXLINE( 607)					::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,input);
            				}
            			}
            			else {
HXLINE( 609)				bool _hx_tmp;
HXDLIN( 609)				if (::Reflect_obj::hasField(this->_hx___data,name)) {
HXLINE( 609)					_hx_tmp = ::hx::IsNull( ::Reflect_obj::field(this->_hx___data,name) );
            				}
            				else {
HXLINE( 609)					_hx_tmp = true;
            				}
HXDLIN( 609)				if (_hx_tmp) {
HXLINE( 611)					 ::Dynamic parameterType;
HXDLIN( 611)					::String _hx_switch_1 = type;
            					if (  (_hx_switch_1==HX_("bool",2a,84,1b,41)) ){
HXLINE( 611)						parameterType = 0;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec2",c0,00,91,bb)) ){
HXLINE( 611)						parameterType = 1;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec3",c1,00,91,bb)) ){
HXLINE( 611)						parameterType = 2;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec4",c2,00,91,bb)) ){
HXLINE( 611)						parameterType = 3;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec2",c2,29,5e,e2)) ||  (_hx_switch_1==HX_("vec2",5e,27,4c,4e)) ){
HXLINE( 611)						parameterType = 5;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec3",c3,29,5e,e2)) ||  (_hx_switch_1==HX_("vec3",5f,27,4c,4e)) ){
HXLINE( 611)						parameterType = 6;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("double",11,2b,cb,32)) ||  (_hx_switch_1==HX_("float",9c,c5,96,02)) ){
HXLINE( 611)						parameterType = 4;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec3",48,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec3",54,06,2e,ac)) ){
HXLINE( 611)						parameterType = 10;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec4",49,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec4",55,06,2e,ac)) ){
HXLINE( 611)						parameterType = 11;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2",92,41,56,48)) ||  (_hx_switch_1==HX_("mat2x2",cc,b2,97,bb)) ){
HXLINE( 611)						parameterType = 12;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x3",cd,b2,97,bb)) ){
HXLINE( 611)						parameterType = 13;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x4",ce,b2,97,bb)) ){
HXLINE( 611)						parameterType = 14;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x2",0d,75,98,bb)) ){
HXLINE( 611)						parameterType = 15;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3",93,41,56,48)) ||  (_hx_switch_1==HX_("mat3x3",0e,75,98,bb)) ){
HXLINE( 611)						parameterType = 16;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x4",0f,75,98,bb)) ){
HXLINE( 611)						parameterType = 17;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4",94,41,56,48)) ||  (_hx_switch_1==HX_("mat4x4",50,37,99,bb)) ){
HXLINE( 611)						parameterType = 20;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x2",4e,37,99,bb)) ){
HXLINE( 611)						parameterType = 18;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x3",4f,37,99,bb)) ){
HXLINE( 611)						parameterType = 19;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ||  (_hx_switch_1==HX_("uint",9a,03,a6,4d)) ){
HXLINE( 611)						parameterType = 8;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec2",47,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec2",53,06,2e,ac)) ){
HXLINE( 611)						parameterType = 9;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec4",c4,29,5e,e2)) ||  (_hx_switch_1==HX_("vec4",60,27,4c,4e)) ){
HXLINE( 611)						parameterType = 7;
HXDLIN( 611)						goto _hx_goto_25;
            					}
            					/* default */{
HXLINE( 611)						parameterType = null();
            					}
            					_hx_goto_25:;
HXLINE( 637)					int length;
HXDLIN( 637)					 ::Dynamic _hx_switch_2 = parameterType;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 637)						length = 2;
HXDLIN( 637)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ||  (_hx_switch_2==12) ){
HXLINE( 637)						length = 4;
HXDLIN( 637)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 637)						length = 3;
HXDLIN( 637)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 637)						length = 9;
HXDLIN( 637)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 637)						length = 16;
HXDLIN( 637)						goto _hx_goto_26;
            					}
            					/* default */{
HXLINE( 637)						length = 1;
            					}
            					_hx_goto_26:;
HXLINE( 647)					int arrayLength;
HXDLIN( 647)					 ::Dynamic _hx_switch_3 = parameterType;
            					if (  (_hx_switch_3==12) ){
HXLINE( 647)						arrayLength = 2;
HXDLIN( 647)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 647)						arrayLength = 3;
HXDLIN( 647)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 647)						arrayLength = 4;
HXDLIN( 647)						goto _hx_goto_27;
            					}
            					/* default */{
HXLINE( 647)						arrayLength = 1;
            					}
            					_hx_goto_27:;
HXLINE( 655)					 ::Dynamic _hx_switch_4 = parameterType;
            					if (  (_hx_switch_4==0) ||  (_hx_switch_4==1) ||  (_hx_switch_4==2) ||  (_hx_switch_4==3) ){
HXLINE( 658)						 ::openfl::display::ShaderParameter_Bool parameter =  ::openfl::display::ShaderParameter_Bool_obj::__alloc( HX_CTX );
HXLINE( 659)						parameter->set_name(name);
HXLINE( 660)						parameter->type = parameterType;
HXLINE( 661)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 662)						parameter->_hx___isBool = true;
HXLINE( 663)						parameter->_hx___isUniform = isUniform;
HXLINE( 664)						parameter->__length = length;
HXLINE( 665)						this->_hx___paramBool->push(parameter);
HXLINE( 667)						if ((name == HX_("openfl_HasColorTransform",b4,00,4b,62))) {
HXLINE( 669)							this->_hx___hasColorTransform = parameter;
            						}
HXLINE( 672)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 673)						if (this->_hx___isGenerated) {
HXLINE( 673)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 657)						goto _hx_goto_29;
            					}
            					if (  (_hx_switch_4==8) ||  (_hx_switch_4==9) ||  (_hx_switch_4==10) ||  (_hx_switch_4==11) ){
HXLINE( 676)						 ::openfl::display::ShaderParameter_Int parameter =  ::openfl::display::ShaderParameter_Int_obj::__alloc( HX_CTX );
HXLINE( 677)						parameter->set_name(name);
HXLINE( 678)						parameter->type = parameterType;
HXLINE( 679)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 680)						parameter->_hx___isInt = true;
HXLINE( 681)						parameter->_hx___isUniform = isUniform;
HXLINE( 682)						parameter->__length = length;
HXLINE( 683)						this->_hx___paramInt->push(parameter);
HXLINE( 684)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 685)						if (this->_hx___isGenerated) {
HXLINE( 685)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 675)						goto _hx_goto_29;
            					}
            					/* default */{
HXLINE( 688)						 ::openfl::display::ShaderParameter_Float parameter =  ::openfl::display::ShaderParameter_Float_obj::__alloc( HX_CTX );
HXLINE( 689)						parameter->set_name(name);
HXLINE( 690)						parameter->type = parameterType;
HXLINE( 691)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 693)						if ((arrayLength > 0)) {
HXLINE( 693)							 ::Dynamic elements = (arrayLength * arrayLength);
HXDLIN( 693)							 ::haxe::io::Bytes buffer = null();
HXDLIN( 693)							::cpp::VirtualArray array = null();
HXDLIN( 693)							 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 693)							 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 693)							 ::Dynamic len = null();
HXDLIN( 693)							 ::lime::utils::ArrayBufferView this1;
HXDLIN( 693)							if (::hx::IsNotNull( elements )) {
HXLINE( 693)								this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            							}
            							else {
HXLINE( 693)								if (::hx::IsNotNull( array )) {
HXLINE( 693)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 693)									_this->byteOffset = 0;
HXDLIN( 693)									_this->length = array->get_length();
HXDLIN( 693)									_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 693)									 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 693)									_this->buffer = this2;
HXDLIN( 693)									_this->copyFromArray(array,null());
HXDLIN( 693)									this1 = _this;
            								}
            								else {
HXLINE( 693)									if (::hx::IsNotNull( vector )) {
HXLINE( 693)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 693)										::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 693)										_this->byteOffset = 0;
HXDLIN( 693)										_this->length = array->get_length();
HXDLIN( 693)										_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 693)										 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 693)										_this->buffer = this2;
HXDLIN( 693)										_this->copyFromArray(array,null());
HXDLIN( 693)										this1 = _this;
            									}
            									else {
HXLINE( 693)										if (::hx::IsNotNull( view )) {
HXLINE( 693)											 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 693)											 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 693)											int srcLength = view->length;
HXDLIN( 693)											int srcByteOffset = view->byteOffset;
HXDLIN( 693)											int srcElementSize = view->bytesPerElement;
HXDLIN( 693)											int elementSize = _this->bytesPerElement;
HXDLIN( 693)											if ((view->type == _this->type)) {
HXLINE( 693)												int srcLength = srcData->length;
HXDLIN( 693)												int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 693)												 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 693)												_this->buffer = this1;
HXDLIN( 693)												_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            											}
            											else {
HXLINE( 693)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            											}
HXDLIN( 693)											_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 693)											_this->byteOffset = 0;
HXDLIN( 693)											_this->length = srcLength;
HXDLIN( 693)											this1 = _this;
            										}
            										else {
HXLINE( 693)											if (::hx::IsNotNull( buffer )) {
HXLINE( 693)												 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 693)												int in_byteOffset = 0;
HXDLIN( 693)												if ((in_byteOffset < 0)) {
HXLINE( 693)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 693)												if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 693)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 693)												int bufferByteLength = buffer->length;
HXDLIN( 693)												int elementSize = _this->bytesPerElement;
HXDLIN( 693)												int newByteLength = bufferByteLength;
HXDLIN( 693)												if (::hx::IsNull( len )) {
HXLINE( 693)													newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 693)													if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 693)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
HXDLIN( 693)													if ((newByteLength < 0)) {
HXLINE( 693)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
            												else {
HXLINE( 693)													newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 693)													int newRange = (in_byteOffset + newByteLength);
HXDLIN( 693)													if ((newRange > bufferByteLength)) {
HXLINE( 693)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
HXDLIN( 693)												_this->buffer = buffer;
HXDLIN( 693)												_this->byteOffset = in_byteOffset;
HXDLIN( 693)												_this->byteLength = newByteLength;
HXDLIN( 693)												_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 693)												this1 = _this;
            											}
            											else {
HXLINE( 693)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            											}
            										}
            									}
            								}
            							}
HXDLIN( 693)							parameter->_hx___uniformMatrix = this1;
            						}
HXLINE( 695)						parameter->_hx___isFloat = true;
HXLINE( 696)						parameter->_hx___isUniform = isUniform;
HXLINE( 697)						parameter->__length = length;
HXLINE( 698)						this->_hx___paramFloat->push(parameter);
HXLINE( 700)						if (::StringTools_obj::startsWith(name,HX_("openfl_",cf,ba,42,40))) {
HXLINE( 702)							::String _hx_switch_5 = name;
            							if (  (_hx_switch_5==HX_("openfl_Alpha",0f,ce,3e,6a)) ){
HXLINE( 704)								this->_hx___alpha = parameter;
HXDLIN( 704)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorMultiplier",b5,e4,dc,18)) ){
HXLINE( 705)								this->_hx___colorMultiplier = parameter;
HXDLIN( 705)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorOffset",c7,ea,07,41)) ){
HXLINE( 706)								this->_hx___colorOffset = parameter;
HXDLIN( 706)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Matrix",70,ea,41,06)) ){
HXLINE( 707)								this->_hx___matrix = parameter;
HXDLIN( 707)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Position",98,fe,6c,ee)) ){
HXLINE( 708)								this->_hx___position = parameter;
HXDLIN( 708)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureCoord",49,e9,27,e8)) ){
HXLINE( 709)								this->_hx___textureCoord = parameter;
HXDLIN( 709)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureSize",ad,60,72,29)) ){
HXLINE( 710)								this->_hx___textureSize = parameter;
HXDLIN( 710)								goto _hx_goto_28;
            							}
            							/* default */{
            							}
            							_hx_goto_28:;
            						}
HXLINE( 715)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 716)						if (this->_hx___isGenerated) {
HXLINE( 716)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
            					}
            					_hx_goto_29:;
            				}
            			}
HXLINE( 720)			position = regex->matchedPos();
HXLINE( 721)			lastMatch = ( (int)((position->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + position->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___processGLData,(void))

void Shader_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_727___update)
HXDLIN( 727)		if (::hx::IsNotNull( this->program )) {
HXLINE( 729)			this->_hx___updateGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___update,(void))

void Shader_obj::_hx___updateFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_735___updateFromBuffer)
HXDLIN( 735)		if (::hx::IsNotNull( this->program )) {
HXLINE( 737)			this->_hx___updateGLFromBuffer(shaderBuffer,bufferOffset);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateFromBuffer,(void))

void Shader_obj::_hx___updateGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_742___updateGL)
HXLINE( 743)		int textureCount = 0;
HXLINE( 745)		{
HXLINE( 745)			int _g = 0;
HXDLIN( 745)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 745)			while((_g < _g1->length)){
HXLINE( 745)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 745)				_g = (_g + 1);
HXLINE( 747)				input->_hx___updateGL(this->_hx___context,textureCount,null(),null(),null(),null());
HXLINE( 748)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 751)		{
HXLINE( 751)			int _g2 = 0;
HXDLIN( 751)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 751)			while((_g2 < _g3->length)){
HXLINE( 751)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 751)				_g2 = (_g2 + 1);
HXLINE( 753)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 756)		{
HXLINE( 756)			int _g4 = 0;
HXDLIN( 756)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 756)			while((_g4 < _g5->length)){
HXLINE( 756)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 756)				_g4 = (_g4 + 1);
HXLINE( 758)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 761)		{
HXLINE( 761)			int _g6 = 0;
HXDLIN( 761)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 761)			while((_g6 < _g7->length)){
HXLINE( 761)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 761)				_g6 = (_g6 + 1);
HXLINE( 763)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___updateGL,(void))

void Shader_obj::_hx___updateGLFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_768___updateGLFromBuffer)
HXLINE( 769)		int textureCount = 0;
HXLINE( 770)		 ::openfl::display::ShaderInput_openfl_display_BitmapData input;
HXDLIN( 770)		 ::openfl::display::BitmapData inputData;
HXDLIN( 770)		 ::Dynamic inputFilter;
HXDLIN( 770)		 ::Dynamic inputMipFilter;
HXDLIN( 770)		 ::Dynamic inputWrap;
HXLINE( 772)		{
HXLINE( 772)			int _g = 0;
HXDLIN( 772)			int _g1 = shaderBuffer->inputCount;
HXDLIN( 772)			while((_g < _g1)){
HXLINE( 772)				_g = (_g + 1);
HXDLIN( 772)				int i = (_g - 1);
HXLINE( 774)				input = shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXLINE( 775)				inputData = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 776)				inputFilter = shaderBuffer->inputFilter->__get(i);
HXLINE( 777)				inputMipFilter = shaderBuffer->inputMipFilter->__get(i);
HXLINE( 778)				inputWrap = shaderBuffer->inputWrap->__get(i);
HXLINE( 780)				if (::hx::IsNotNull( inputData )) {
HXLINE( 782)					input->_hx___updateGL(this->_hx___context,textureCount,inputData,inputFilter,inputMipFilter,inputWrap);
HXLINE( 783)					textureCount = (textureCount + 1);
            				}
            			}
            		}
HXLINE( 787)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 789)		if ((shaderBuffer->paramDataLength > 0)) {
HXLINE( 791)			if (::hx::IsNull( shaderBuffer->paramDataBuffer )) {
HXLINE( 793)				shaderBuffer->paramDataBuffer = gl->createBuffer();
            			}
HXLINE( 798)			this->_hx___context->_hx___bindGLArrayBuffer(shaderBuffer->paramDataBuffer);
HXLINE( 799)			::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,shaderBuffer->paramData,gl->DYNAMIC_DRAW);
            		}
            		else {
HXLINE( 805)			this->_hx___context->_hx___bindGLArrayBuffer(null());
            		}
HXLINE( 808)		int boolIndex = 0;
HXLINE( 809)		int floatIndex = 0;
HXLINE( 810)		int intIndex = 0;
HXLINE( 812)		int boolCount = shaderBuffer->paramBoolCount;
HXLINE( 813)		int floatCount = shaderBuffer->paramFloatCount;
HXLINE( 814)		 ::lime::utils::ArrayBufferView paramData = shaderBuffer->paramData;
HXLINE( 816)		 ::openfl::display::ShaderParameter_Bool boolRef;
HXDLIN( 816)		 ::openfl::display::ShaderParameter_Float floatRef;
HXDLIN( 816)		 ::openfl::display::ShaderParameter_Int intRef;
HXDLIN( 816)		bool hasOverride;
HXLINE( 817)		::Array< bool > overrideBoolValue = null();
HXDLIN( 817)		::Array< Float > overrideFloatValue = null();
HXDLIN( 817)		::Array< int > overrideIntValue = null();
HXLINE( 821)		{
HXLINE( 821)			int _g2 = 0;
HXDLIN( 821)			int _g3 = shaderBuffer->paramCount;
HXDLIN( 821)			while((_g2 < _g3)){
HXLINE( 821)				_g2 = (_g2 + 1);
HXDLIN( 821)				int i = (_g2 - 1);
HXLINE( 823)				hasOverride = false;
HXLINE( 825)				if ((i < boolCount)) {
HXLINE( 827)					boolRef = shaderBuffer->paramRefs_Bool->__get(boolIndex).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXLINE( 829)					{
HXLINE( 829)						int _g = 0;
HXDLIN( 829)						int _g1 = shaderBuffer->overrideBoolCount;
HXDLIN( 829)						while((_g < _g1)){
HXLINE( 829)							_g = (_g + 1);
HXDLIN( 829)							int j = (_g - 1);
HXLINE( 831)							if ((boolRef->name == shaderBuffer->overrideBoolNames->__get(j))) {
HXLINE( 833)								overrideBoolValue = shaderBuffer->overrideBoolValues->__get(j).StaticCast< ::Array< bool > >();
HXLINE( 834)								hasOverride = true;
HXLINE( 835)								goto _hx_goto_40;
            							}
            						}
            						_hx_goto_40:;
            					}
HXLINE( 839)					if (hasOverride) {
HXLINE( 841)						boolRef->_hx___updateGL(this->_hx___context,overrideBoolValue);
            					}
            					else {
HXLINE( 845)						boolRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            					}
HXLINE( 848)					boolIndex = (boolIndex + 1);
            				}
            				else {
HXLINE( 850)					if ((i < (boolCount + floatCount))) {
HXLINE( 852)						floatRef = shaderBuffer->paramRefs_Float->__get(floatIndex).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXLINE( 854)						{
HXLINE( 854)							int _g = 0;
HXDLIN( 854)							int _g1 = shaderBuffer->overrideFloatCount;
HXDLIN( 854)							while((_g < _g1)){
HXLINE( 854)								_g = (_g + 1);
HXDLIN( 854)								int j = (_g - 1);
HXLINE( 856)								if ((floatRef->name == shaderBuffer->overrideFloatNames->__get(j))) {
HXLINE( 858)									overrideFloatValue = shaderBuffer->overrideFloatValues->__get(j).StaticCast< ::Array< Float > >();
HXLINE( 859)									hasOverride = true;
HXLINE( 860)									goto _hx_goto_41;
            								}
            							}
            							_hx_goto_41:;
            						}
HXLINE( 864)						if (hasOverride) {
HXLINE( 866)							floatRef->_hx___updateGL(this->_hx___context,overrideFloatValue);
            						}
            						else {
HXLINE( 870)							floatRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 873)						floatIndex = (floatIndex + 1);
            					}
            					else {
HXLINE( 877)						intRef = shaderBuffer->paramRefs_Int->__get(intIndex).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXLINE( 879)						{
HXLINE( 879)							int _g = 0;
HXDLIN( 879)							int _g1 = shaderBuffer->overrideIntCount;
HXDLIN( 879)							while((_g < _g1)){
HXLINE( 879)								_g = (_g + 1);
HXDLIN( 879)								int j = (_g - 1);
HXLINE( 881)								if ((intRef->name == shaderBuffer->overrideIntNames->__get(j))) {
HXLINE( 883)									overrideIntValue = ::cpp::VirtualArray( shaderBuffer->overrideIntValues->__get(j));
HXLINE( 884)									hasOverride = true;
HXLINE( 885)									goto _hx_goto_42;
            								}
            							}
            							_hx_goto_42:;
            						}
HXLINE( 889)						if (hasOverride) {
HXLINE( 891)							intRef->_hx___updateGL(this->_hx___context,overrideIntValue);
            						}
            						else {
HXLINE( 895)							intRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 898)						intIndex = (intIndex + 1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateGLFromBuffer,(void))

 ::Dynamic Shader_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_905_get_data)
HXLINE( 906)		bool _hx_tmp;
HXDLIN( 906)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 906)			_hx_tmp = ::hx::IsNull( this->_hx___data );
            		}
            		else {
HXLINE( 906)			_hx_tmp = true;
            		}
HXDLIN( 906)		if (_hx_tmp) {
HXLINE( 908)			this->_hx___init();
            		}
HXLINE( 911)		return this->_hx___data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_data,return )

 ::Dynamic Shader_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_916_set_data)
HXDLIN( 916)		return (this->_hx___data = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_data,return )

::String Shader_obj::get_glFragmentSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_921_get_glFragmentSource)
HXDLIN( 921)		return this->_hx___glFragmentSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glFragmentSource,return )

::String Shader_obj::set_glFragmentSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_925_set_glFragmentSource)
HXLINE( 926)		if ((value != this->_hx___glFragmentSource)) {
HXLINE( 928)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 931)		return (this->_hx___glFragmentSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glFragmentSource,return )

::String Shader_obj::get_glVertexSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_936_get_glVertexSource)
HXDLIN( 936)		return this->_hx___glVertexSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glVertexSource,return )

::String Shader_obj::set_glVertexSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_940_set_glVertexSource)
HXLINE( 941)		if ((value != this->_hx___glVertexSource)) {
HXLINE( 943)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 946)		return (this->_hx___glVertexSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glVertexSource,return )


::hx::ObjectPtr< Shader_obj > Shader_obj::__new( ::openfl::utils::ByteArrayData code) {
	::hx::ObjectPtr< Shader_obj > __this = new Shader_obj();
	__this->__construct(code);
	return __this;
}

::hx::ObjectPtr< Shader_obj > Shader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code) {
	Shader_obj *__this = (Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shader_obj), true, "openfl.display.Shader"));
	*(void **)__this = Shader_obj::_hx_vtable;
	__this->__construct(code);
	return __this;
}

Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_MARK_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_MARK_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_MARK_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_MARK_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_MARK_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_MARK_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_MARK_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_MARK_MEMBER_NAME(_hx___position,"__position");
	HX_MARK_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___textureSize,"__textureSize");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_VISIT_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_VISIT_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_VISIT_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_VISIT_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_VISIT_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_VISIT_MEMBER_NAME(_hx___position,"__position");
	HX_VISIT_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___textureSize,"__textureSize");
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return ::hx::Val( byteCode ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__enable") ) { return ::hx::Val( _hx___enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"__initGL") ) { return ::hx::Val( _hx___initGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return ::hx::Val( glProgram ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"__disable") ) { return ::hx::Val( _hx___disable_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { return ::hx::Val( _hx___paramInt ); }
		if (HX_FIELD_EQ(inName,"__position") ) { return ::hx::Val( _hx___position ); }
		if (HX_FIELD_EQ(inName,"__enableGL") ) { return ::hx::Val( _hx___enableGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { return ::hx::Val( _hx___numPasses ); }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { return ::hx::Val( _hx___paramBool ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { return ::hx::Val( _hx___paramFloat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return ::hx::Val( precisionHint ); }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { return ::hx::Val( _hx___colorOffset ); }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { return ::hx::Val( _hx___isGenerated ); }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { return ::hx::Val( _hx___textureSize ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glVertexSource() ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { return ::hx::Val( _hx___textureCoord ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { return ::hx::Val( _hx___glSourceDirty ); }
		if (HX_FIELD_EQ(inName,"__clearUseArray") ) { return ::hx::Val( _hx___clearUseArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return ::hx::Val( _hx___processGLData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glFragmentSource() ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return ::hx::Val( _hx___glVertexSource ); }
		if (HX_FIELD_EQ(inName,"__createGLShader") ) { return ::hx::Val( _hx___createGLShader_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { return ::hx::Val( _hx___colorMultiplier ); }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { return ::hx::Val( _hx___inputBitmapData ); }
		if (HX_FIELD_EQ(inName,"__createGLProgram") ) { return ::hx::Val( _hx___createGLProgram_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return ::hx::Val( _hx___glFragmentSource ); }
		if (HX_FIELD_EQ(inName,"__updateFromBuffer") ) { return ::hx::Val( _hx___updateFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glVertexSource") ) { return ::hx::Val( get_glVertexSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glVertexSource") ) { return ::hx::Val( set_glVertexSource_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { return ::hx::Val( _hx___hasColorTransform ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__updateGLFromBuffer") ) { return ::hx::Val( _hx___updateGLFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glFragmentSource") ) { return ::hx::Val( get_glFragmentSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glFragmentSource") ) { return ::hx::Val( set_glFragmentSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { _hx___paramInt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__position") ) { _hx___position=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { _hx___numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { _hx___paramBool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { _hx___paramFloat=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { _hx___colorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { _hx___isGenerated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { _hx___textureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glVertexSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { _hx___textureCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { _hx___glSourceDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glFragmentSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { _hx___glVertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { _hx___colorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { _hx___inputBitmapData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { _hx___glFragmentSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { _hx___hasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("byteCode",55,20,71,42));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("glFragmentSource",d0,c5,ca,f7));
	outFields->push(HX_("glProgram",df,d6,b3,c1));
	outFields->push(HX_("glVertexSource",24,6d,4a,5b));
	outFields->push(HX_("precisionHint",e5,b5,95,2c));
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__colorMultiplier",a4,47,db,d3));
	outFields->push(HX_("__colorOffset",36,6a,e0,62));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__glFragmentSource",f0,58,5b,63));
	outFields->push(HX_("__glSourceDirty",f2,a3,ef,41));
	outFields->push(HX_("__glVertexSource",44,f8,89,8f));
	outFields->push(HX_("__hasColorTransform",63,3d,db,a3));
	outFields->push(HX_("__inputBitmapData",43,df,f6,64));
	outFields->push(HX_("__isGenerated",25,e7,69,bb));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	outFields->push(HX_("__numPasses",45,67,5f,cd));
	outFields->push(HX_("__paramBool",37,44,b6,5f));
	outFields->push(HX_("__paramFloat",ef,10,64,ab));
	outFields->push(HX_("__paramInt",82,cd,bd,21));
	outFields->push(HX_("__position",c9,13,33,6e));
	outFields->push(HX_("__textureCoord",fa,ea,be,63));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__textureSize",1c,e0,4a,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(Shader_obj,byteCode),HX_("byteCode",55,20,71,42)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Shader_obj,glProgram),HX_("glProgram",df,d6,b3,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,precisionHint),HX_("precisionHint",e5,b5,95,2c)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Shader_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorMultiplier),HX_("__colorMultiplier",a4,47,db,d3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorOffset),HX_("__colorOffset",36,6a,e0,62)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Shader_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glFragmentSource),HX_("__glFragmentSource",f0,58,5b,63)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___glSourceDirty),HX_("__glSourceDirty",f2,a3,ef,41)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glVertexSource),HX_("__glVertexSource",44,f8,89,8f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(Shader_obj,_hx___hasColorTransform),HX_("__hasColorTransform",63,3d,db,a3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___inputBitmapData),HX_("__inputBitmapData",43,df,f6,64)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___isGenerated),HX_("__isGenerated",25,e7,69,bb)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{::hx::fsInt,(int)offsetof(Shader_obj,_hx___numPasses),HX_("__numPasses",45,67,5f,cd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramBool),HX_("__paramBool",37,44,b6,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramFloat),HX_("__paramFloat",ef,10,64,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramInt),HX_("__paramInt",82,cd,bd,21)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___position),HX_("__position",c9,13,33,6e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureCoord),HX_("__textureCoord",fa,ea,be,63)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureSize),HX_("__textureSize",1c,e0,4a,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("byteCode",55,20,71,42),
	HX_("glProgram",df,d6,b3,c1),
	HX_("precisionHint",e5,b5,95,2c),
	HX_("program",84,4a,f9,f3),
	HX_("__alpha",3e,00,f5,8b),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__colorMultiplier",a4,47,db,d3),
	HX_("__colorOffset",36,6a,e0,62),
	HX_("__context",cf,e6,c5,9a),
	HX_("__data",4a,b9,5b,f1),
	HX_("__glFragmentSource",f0,58,5b,63),
	HX_("__glSourceDirty",f2,a3,ef,41),
	HX_("__glVertexSource",44,f8,89,8f),
	HX_("__hasColorTransform",63,3d,db,a3),
	HX_("__inputBitmapData",43,df,f6,64),
	HX_("__isGenerated",25,e7,69,bb),
	HX_("__matrix",61,a1,f7,63),
	HX_("__numPasses",45,67,5f,cd),
	HX_("__paramBool",37,44,b6,5f),
	HX_("__paramFloat",ef,10,64,ab),
	HX_("__paramInt",82,cd,bd,21),
	HX_("__position",c9,13,33,6e),
	HX_("__textureCoord",fa,ea,be,63),
	HX_("__texture",bb,19,2f,20),
	HX_("__textureSize",1c,e0,4a,4b),
	HX_("__clearUseArray",5f,0b,0a,a8),
	HX_("__createGLShader",46,69,da,33),
	HX_("__createGLProgram",43,7d,b4,bf),
	HX_("__disable",c8,ba,a6,32),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__enable",a3,19,b7,a0),
	HX_("__enableGL",88,46,eb,8f),
	HX_("__init",30,9e,b3,f4),
	HX_("__initGL",55,c8,7b,3f),
	HX_("__processGLData",7e,0f,78,7c),
	HX_("__update",29,f1,34,2f),
	HX_("__updateFromBuffer",93,24,55,c9),
	HX_("__updateGL",8e,8b,32,1b),
	HX_("__updateGLFromBuffer",38,8f,d7,17),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("get_glFragmentSource",d9,2a,35,16),
	HX_("set_glFragmentSource",4d,e2,ec,e2),
	HX_("get_glVertexSource",ed,4d,e4,f6),
	HX_("set_glVertexSource",61,80,93,d3),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Shader",0f,df,61,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_124_boot)
HXDLIN( 124)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("glProgram",df,d6,b3,c1), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
