// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_69_as,"openfl.Lib","as",0x3965ffb9,"openfl.Lib.as","openfl/Lib.hx",69,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_78_attach,"openfl.Lib","attach",0xe350160c,"openfl.Lib.attach","openfl/Lib.hx",78,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_90_clearInterval,"openfl.Lib","clearInterval",0x3d2e488b,"openfl.Lib.clearInterval","openfl/Lib.hx",90,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_106_clearTimeout,"openfl.Lib","clearTimeout",0x5e39561b,"openfl.Lib.clearTimeout","openfl/Lib.hx",106,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_138_getDefinitionByName,"openfl.Lib","getDefinitionByName",0xbac193c4,"openfl.Lib.getDefinitionByName","openfl/Lib.hx",138,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_161_getQualifiedClassName,"openfl.Lib","getQualifiedClassName",0x7f8a34b6,"openfl.Lib.getQualifiedClassName","openfl/Lib.hx",161,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_201_getQualifiedSuperclassName,"openfl.Lib","getQualifiedSuperclassName",0xc02d02d5,"openfl.Lib.getQualifiedSuperclassName","openfl/Lib.hx",201,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_235_getTimer,"openfl.Lib","getTimer",0xd73d4956,"openfl.Lib.getTimer","openfl/Lib.hx",235,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_244_getURL,"openfl.Lib","getURL",0xa66862c0,"openfl.Lib.getURL","openfl/Lib.hx",244,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_397_navigateToURL,"openfl.Lib","navigateToURL",0x74efcc5c,"openfl.Lib.navigateToURL","openfl/Lib.hx",397,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_434_notImplemented,"openfl.Lib","notImplemented",0x6ff873b6,"openfl.Lib.notImplemented","openfl/Lib.hx",434,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_446_preventDefaultTouchMove,"openfl.Lib","preventDefaultTouchMove",0x0727aa40,"openfl.Lib.preventDefaultTouchMove","openfl/Lib.hx",446,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_501_sendToURL,"openfl.Lib","sendToURL",0xb7c4ca65,"openfl.Lib.sendToURL","openfl/Lib.hx",501,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_536_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",536,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_530_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",530,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_564_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",564,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_568_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",568,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_575_trace,"openfl.Lib","trace",0xeba99a1e,"openfl.Lib.trace","openfl/Lib.hx",575,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_581_get_application,"openfl.Lib","get_application",0x64b447c0,"openfl.Lib.get_application","openfl/Lib.hx",581,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_585_get_current,"openfl.Lib","get_current",0x315640a9,"openfl.Lib.get_current","openfl/Lib.hx",585,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_37_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",37,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_38_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",38,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_39_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",39,0x62fb7c98)
namespace openfl{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19d6bed5;
}

int Lib_obj::_hx___lastTimerID;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

 ::haxe::ds::IntMap Lib_obj::_hx___timers;

 ::Dynamic Lib_obj::as( ::Dynamic v,hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_69_as)
HXDLIN(  69)		if (::Std_obj::is(v,c)) {
HXDLIN(  69)			return v;
            		}
            		else {
HXDLIN(  69)			return null();
            		}
HXDLIN(  69)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

 ::openfl::display::MovieClip Lib_obj::attach(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_78_attach)
HXDLIN(  78)		return  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

void Lib_obj::clearInterval(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_90_clearInterval)
HXDLIN(  90)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE(  92)			 ::haxe::Timer timer = ( ( ::haxe::Timer)(::openfl::Lib_obj::_hx___timers->get(id)) );
HXLINE(  93)			timer->stop();
HXLINE(  94)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearInterval,(void))

void Lib_obj::clearTimeout(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_106_clearTimeout)
HXDLIN( 106)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE( 108)			 ::haxe::Timer timer = ( ( ::haxe::Timer)(::openfl::Lib_obj::_hx___timers->get(id)) );
HXLINE( 109)			timer->stop();
HXLINE( 110)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearTimeout,(void))

hx::Class Lib_obj::getDefinitionByName(::String name){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_138_getDefinitionByName)
HXLINE( 139)		if (hx::IsNull( name )) {
HXLINE( 139)			return null();
            		}
HXLINE( 148)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getDefinitionByName,return )

::String Lib_obj::getQualifiedClassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_161_getQualifiedClassName)
HXLINE( 162)		if (hx::IsNull( value )) {
HXLINE( 162)			return null();
            		}
HXLINE( 163)		hx::Class ref;
HXDLIN( 163)		if (::Std_obj::is(value,hx::ClassOf< ::hx::Class >())) {
HXLINE( 163)			ref = value;
            		}
            		else {
HXLINE( 163)			ref = ::Type_obj::getClass(value);
            		}
HXLINE( 164)		if (hx::IsNull( ref )) {
HXLINE( 166)			bool _hx_tmp;
HXDLIN( 166)			if (!(::Std_obj::is(value,hx::ClassOf< bool >()))) {
HXLINE( 166)				_hx_tmp = hx::IsEq( value,hx::ClassOf< bool >() );
            			}
            			else {
HXLINE( 166)				_hx_tmp = true;
            			}
HXDLIN( 166)			if (_hx_tmp) {
HXLINE( 166)				return HX_("Bool",4a,b0,f4,2b);
            			}
            			else {
HXLINE( 167)				bool _hx_tmp1;
HXDLIN( 167)				if (!(::Std_obj::is(value,hx::ClassOf< int >()))) {
HXLINE( 167)					_hx_tmp1 = hx::IsEq( value,hx::ClassOf< int >() );
            				}
            				else {
HXLINE( 167)					_hx_tmp1 = true;
            				}
HXDLIN( 167)				if (_hx_tmp1) {
HXLINE( 167)					return HX_("Int",cf,c4,37,00);
            				}
            				else {
HXLINE( 168)					bool _hx_tmp2;
HXDLIN( 168)					if (!(::Std_obj::is(value,hx::ClassOf< ::Float >()))) {
HXLINE( 168)						_hx_tmp2 = hx::IsEq( value,hx::ClassOf< ::Float >() );
            					}
            					else {
HXLINE( 168)						_hx_tmp2 = true;
            					}
HXDLIN( 168)					if (_hx_tmp2) {
HXLINE( 168)						return HX_("Float",7c,35,c4,95);
            					}
            					else {
HXLINE( 171)						return null();
            					}
            				}
            			}
            		}
HXLINE( 173)		return ::Type_obj::getClassName(ref);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedClassName,return )

::String Lib_obj::getQualifiedSuperclassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_201_getQualifiedSuperclassName)
HXLINE( 202)		if (hx::IsNull( value )) {
HXLINE( 202)			return null();
            		}
HXLINE( 203)		hx::Class ref;
HXDLIN( 203)		if (::Std_obj::is(value,hx::ClassOf< ::hx::Class >())) {
HXLINE( 203)			ref = value;
            		}
            		else {
HXLINE( 203)			ref = ::Type_obj::getClass(value);
            		}
HXLINE( 204)		if (hx::IsNull( ref )) {
HXLINE( 204)			return null();
            		}
HXLINE( 205)		hx::Class parentRef = ::Type_obj::getSuperClass(ref);
HXLINE( 206)		if (hx::IsNull( parentRef )) {
HXLINE( 206)			return null();
            		}
HXLINE( 207)		return ::Type_obj::getClassName(parentRef);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedSuperclassName,return )

int Lib_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_235_getTimer)
HXDLIN( 235)		return ::lime::_hx_system::System_obj::getTimer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_244_getURL)
HXDLIN( 244)		::openfl::Lib_obj::navigateToURL(request,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

void Lib_obj::navigateToURL( ::openfl::net::URLRequest request,::String window){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_397_navigateToURL)
HXLINE( 398)		if (hx::IsNull( window )) {
HXLINE( 400)			window = HX_("_blank",95,26,d9,b0);
            		}
HXLINE( 406)		::String uri = request->url;
HXLINE( 408)		if (hx::IsEq( ::Type_obj::_hx_typeof(request->data),::ValueType_obj::TObject_dyn() )) {
HXLINE( 410)			::String query = HX_("",00,00,00,00);
HXLINE( 411)			::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE( 413)			{
HXLINE( 413)				int _g = 0;
HXDLIN( 413)				while((_g < fields->length)){
HXLINE( 413)					::String field = fields->__get(_g);
HXDLIN( 413)					_g = (_g + 1);
HXLINE( 415)					if ((query.length > 0)) {
HXLINE( 415)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 416)					::String query1 = (::StringTools_obj::urlEncode(field) + HX_("=",3d,00,00,00));
HXDLIN( 416)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(::Reflect_obj::field(request->data,field)))));
            				}
            			}
HXLINE( 419)			if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > -1)) {
HXLINE( 421)				uri = (uri + (HX_("&",26,00,00,00) + query));
            			}
            			else {
HXLINE( 425)				uri = (uri + (HX_("?",3f,00,00,00) + query));
            			}
            		}
HXLINE( 429)		::lime::_hx_system::System_obj::openURL(uri,window);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,navigateToURL,(void))

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_434_notImplemented)
HXLINE( 435)		::String api = ( (::String)(((posInfo->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic) + HX_(".",2e,00,00,00)) + posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic))) );
HXLINE( 437)		if (!(::openfl::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE( 439)			::openfl::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE( 441)			::lime::utils::Log_obj::warn( ::Dynamic((posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic) + HX_(" is not implemented",1f,12,d2,b9))),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

void Lib_obj::preventDefaultTouchMove(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_446_preventDefaultTouchMove)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

void Lib_obj::sendToURL( ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_501_sendToURL)
HXLINE( 502)		 ::openfl::net::URLLoader urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 503)		urlLoader->load(request);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,sendToURL,(void))

int Lib_obj::setInterval( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_536_setInterval)
HXLINE( 536)			::cpp::VirtualArray _hx_tmp;
HXDLIN( 536)			if (hx::IsNull( args )) {
HXLINE( 536)				_hx_tmp = ::cpp::VirtualArray_obj::__new(0);
            			}
            			else {
HXLINE( 536)				_hx_tmp = args;
            			}
HXDLIN( 536)			::Reflect_obj::callMethod(closure,closure,_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_530_setInterval)
HXLINE( 531)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 532)		 ::haxe::Timer timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(delay) ));
HXLINE( 533)		::openfl::Lib_obj::_hx___timers->set(id,timer);
HXLINE( 534)		timer->run =  ::Dynamic(new _hx_Closure_0(closure,args));
HXLINE( 538)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setInterval,return )

int Lib_obj::setTimeout( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_564_setTimeout)
HXLINE( 565)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 566)		{
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_568_setTimeout)
HXLINE( 568)				::cpp::VirtualArray v1;
HXDLIN( 568)				if (hx::IsNull( args )) {
HXLINE( 568)					v1 = ::cpp::VirtualArray_obj::__new(0);
            				}
            				else {
HXLINE( 568)					v1 = args;
            				}
HXDLIN( 568)				::Reflect_obj::callMethod(closure,closure,v1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 566)			::Dynamic this1 = ::openfl::Lib_obj::_hx___timers;
HXDLIN( 566)			 ::haxe::Timer v = ::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(closure,args)),delay);
HXDLIN( 566)			( ( ::haxe::ds::IntMap)(this1) )->set(id,v);
            		}
HXLINE( 570)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setTimeout,return )

void Lib_obj::trace( ::Dynamic arg){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_575_trace)
HXDLIN( 575)		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_("openfl/Lib.hx",98,7c,fb,62),575,HX_("openfl.Lib",47,43,57,2f),HX_("trace",85,8e,1f,16)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

 ::openfl::display::Application Lib_obj::get_application(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_581_get_application)
HXDLIN( 581)		return ::openfl::_internal::Lib_obj::application;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_application,return )

 ::openfl::display::MovieClip Lib_obj::get_current(){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_585_get_current)
HXLINE( 589)		if (hx::IsNull( ::openfl::_internal::Lib_obj::current )) {
HXLINE( 589)			::openfl::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE( 590)		return ::openfl::_internal::Lib_obj::current;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_current() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { outValue = ( _hx___timers ); return true; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendToURL") ) { outValue = sendToURL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTimeout") ) { outValue = setTimeout_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_application() ); return true; } }
		if (HX_FIELD_EQ(inName,"setInterval") ) { outValue = setInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearTimeout") ) { outValue = clearTimeout_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { outValue = ( _hx___lastTimerID ); return true; }
		if (HX_FIELD_EQ(inName,"clearInterval") ) { outValue = clearInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"navigateToURL") ) { outValue = navigateToURL_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_application") ) { outValue = get_application_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDefinitionByName") ) { outValue = getDefinitionByName_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getQualifiedClassName") ) { outValue = getQualifiedClassName_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { outValue = preventDefaultTouchMove_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getQualifiedSuperclassName") ) { outValue = getQualifiedSuperclassName_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { _hx___timers=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { _hx___lastTimerID=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Lib_obj::_hx___lastTimerID,HX_("__lastTimerID",0a,30,1d,d6)},
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lib_obj::_hx___sentWarnings,HX_("__sentWarnings",2f,1b,27,19)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Lib_obj::_hx___timers,HX_("__timers",2e,78,01,c7)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_("__lastTimerID",0a,30,1d,d6),
	HX_("__sentWarnings",2f,1b,27,19),
	HX_("__timers",2e,78,01,c7),
	HX_("as",f2,54,00,00),
	HX_("attach",c5,fb,0f,e0),
	HX_("clearInterval",f2,7b,d9,5b),
	HX_("clearTimeout",94,cc,75,b4),
	HX_("getDefinitionByName",6b,ce,77,2d),
	HX_("getQualifiedClassName",1d,a7,41,b8),
	HX_("getQualifiedSuperclassName",0e,7b,fa,6d),
	HX_("getTimer",4f,cf,0c,70),
	HX_("getURL",79,48,28,a3),
	HX_("navigateToURL",c3,ff,9a,93),
	HX_("notImplemented",6f,3a,1a,27),
	HX_("preventDefaultTouchMove",67,c4,6d,72),
	HX_("sendToURL",4c,7e,8a,d4),
	HX_("setInterval",07,43,dd,58),
	HX_("setTimeout",1f,3f,d6,2b),
	HX_("trace",85,8e,1f,16),
	HX_("get_application",e7,62,20,eb),
	HX_("get_current",50,fc,dd,51),
	::String(null())
};

void Lib_obj::__register()
{
	Lib_obj _hx_dummy;
	Lib_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.Lib",47,43,57,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_37_boot)
HXDLIN(  37)		_hx___lastTimerID = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_38_boot)
HXDLIN(  38)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_39_boot)
HXDLIN(  39)		_hx___timers =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl