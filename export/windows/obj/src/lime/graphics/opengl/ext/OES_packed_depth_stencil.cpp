// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_packed_depth_stencil
#include <lime/graphics/opengl/ext/OES_packed_depth_stencil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cffe52c47ffe91d7_4_new,"lime.graphics.opengl.ext.OES_packed_depth_stencil","new",0xc0eff98f,"lime.graphics.opengl.ext.OES_packed_depth_stencil.new","lime/graphics/opengl/ext/OES_packed_depth_stencil.hx",4,0x2c0e3f5f)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_packed_depth_stencil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cffe52c47ffe91d7_4_new)
HXLINE(   8)		this->DEPTH24_STENCIL8_OES = 35056;
HXLINE(   7)		this->UNSIGNED_INT_24_8_OES = 34042;
HXLINE(   6)		this->DEPTH_STENCIL_OES = 34041;
            	}

Dynamic OES_packed_depth_stencil_obj::__CreateEmpty() { return new OES_packed_depth_stencil_obj; }

void *OES_packed_depth_stencil_obj::_hx_vtable = 0;

Dynamic OES_packed_depth_stencil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_packed_depth_stencil_obj > _hx_result = new OES_packed_depth_stencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_packed_depth_stencil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e5f382d;
}


OES_packed_depth_stencil_obj::OES_packed_depth_stencil_obj()
{
}

hx::Val OES_packed_depth_stencil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_OES") ) { return hx::Val( DEPTH_STENCIL_OES ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { return hx::Val( DEPTH24_STENCIL8_OES ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_OES") ) { return hx::Val( UNSIGNED_INT_24_8_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_packed_depth_stencil_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_OES") ) { DEPTH_STENCIL_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { DEPTH24_STENCIL8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_24_8_OES") ) { UNSIGNED_INT_24_8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_packed_depth_stencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEPTH_STENCIL_OES",be,42,10,29));
	outFields->push(HX_("UNSIGNED_INT_24_8_OES",b3,49,dc,cf));
	outFields->push(HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo OES_packed_depth_stencil_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,DEPTH_STENCIL_OES),HX_("DEPTH_STENCIL_OES",be,42,10,29)},
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,UNSIGNED_INT_24_8_OES),HX_("UNSIGNED_INT_24_8_OES",b3,49,dc,cf)},
	{hx::fsInt,(int)offsetof(OES_packed_depth_stencil_obj,DEPTH24_STENCIL8_OES),HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_packed_depth_stencil_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_packed_depth_stencil_obj_sMemberFields[] = {
	HX_("DEPTH_STENCIL_OES",be,42,10,29),
	HX_("UNSIGNED_INT_24_8_OES",b3,49,dc,cf),
	HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a),
	::String(null()) };

hx::Class OES_packed_depth_stencil_obj::__mClass;

void OES_packed_depth_stencil_obj::__register()
{
	OES_packed_depth_stencil_obj _hx_dummy;
	OES_packed_depth_stencil_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_packed_depth_stencil",1d,86,da,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_packed_depth_stencil_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_packed_depth_stencil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_packed_depth_stencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_packed_depth_stencil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
