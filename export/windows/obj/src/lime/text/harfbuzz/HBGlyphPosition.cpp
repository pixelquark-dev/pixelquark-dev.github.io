// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphPosition
#include <lime/text/harfbuzz/HBGlyphPosition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac97e2fa85d7d054_11_new,"lime.text.harfbuzz.HBGlyphPosition","new",0xd832bba7,"lime.text.harfbuzz.HBGlyphPosition.new","lime/text/harfbuzz/HBGlyphPosition.hx",11,0xc342498a)
namespace lime{
namespace text{
namespace harfbuzz{

void HBGlyphPosition_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ac97e2fa85d7d054_11_new)
            	}

Dynamic HBGlyphPosition_obj::__CreateEmpty() { return new HBGlyphPosition_obj; }

void *HBGlyphPosition_obj::_hx_vtable = 0;

Dynamic HBGlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HBGlyphPosition_obj > _hx_result = new HBGlyphPosition_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBGlyphPosition_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x659a10f5;
}


HBGlyphPosition_obj::HBGlyphPosition_obj()
{
}

hx::Val HBGlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { return hx::Val( xOffset ); }
		if (HX_FIELD_EQ(inName,"yOffset") ) { return hx::Val( yOffset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAdvance") ) { return hx::Val( xAdvance ); }
		if (HX_FIELD_EQ(inName,"yAdvance") ) { return hx::Val( yAdvance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HBGlyphPosition_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { xOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { yOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAdvance") ) { xAdvance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdvance") ) { yAdvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBGlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xAdvance",ea,ae,02,8c));
	outFields->push(HX_("xOffset",2b,b6,e3,12));
	outFields->push(HX_("yAdvance",09,21,35,c5));
	outFields->push(HX_("yOffset",ec,2c,79,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo HBGlyphPosition_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,xAdvance),HX_("xAdvance",ea,ae,02,8c)},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,xOffset),HX_("xOffset",2b,b6,e3,12)},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,yAdvance),HX_("yAdvance",09,21,35,c5)},
	{hx::fsInt,(int)offsetof(HBGlyphPosition_obj,yOffset),HX_("yOffset",ec,2c,79,3c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HBGlyphPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String HBGlyphPosition_obj_sMemberFields[] = {
	HX_("xAdvance",ea,ae,02,8c),
	HX_("xOffset",2b,b6,e3,12),
	HX_("yAdvance",09,21,35,c5),
	HX_("yOffset",ec,2c,79,3c),
	::String(null()) };

hx::Class HBGlyphPosition_obj::__mClass;

void HBGlyphPosition_obj::__register()
{
	HBGlyphPosition_obj _hx_dummy;
	HBGlyphPosition_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz.HBGlyphPosition",35,5c,dc,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HBGlyphPosition_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HBGlyphPosition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBGlyphPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBGlyphPosition_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
