// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front
#include <lime/graphics/opengl/ext/NV_read_buffer_front.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5337d949f43690c9_5_new,"lime.graphics.opengl.ext.NV_read_buffer_front","new",0xba277d50,"lime.graphics.opengl.ext.NV_read_buffer_front.new","lime/graphics/opengl/ext/NV_read_buffer_front.hx",5,0x1fa707be)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_read_buffer_front_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5337d949f43690c9_5_new)
            	}

Dynamic NV_read_buffer_front_obj::__CreateEmpty() { return new NV_read_buffer_front_obj; }

void *NV_read_buffer_front_obj::_hx_vtable = 0;

Dynamic NV_read_buffer_front_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NV_read_buffer_front_obj > _hx_result = new NV_read_buffer_front_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_read_buffer_front_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ea7bda6;
}


NV_read_buffer_front_obj::NV_read_buffer_front_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *NV_read_buffer_front_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NV_read_buffer_front_obj_sStaticStorageInfo = 0;
#endif

hx::Class NV_read_buffer_front_obj::__mClass;

void NV_read_buffer_front_obj::__register()
{
	NV_read_buffer_front_obj _hx_dummy;
	NV_read_buffer_front_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_read_buffer_front",5e,d5,32,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NV_read_buffer_front_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_read_buffer_front_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_read_buffer_front_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext