// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_formats_animate_AnimateFrame
#include <openfl/_internal/formats/animate/AnimateFrame.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateFrameObject
#include <openfl/_internal/formats/animate/AnimateFrameObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b5fd2a58fd67c03_15_new,"openfl._internal.formats.animate.AnimateFrame","new",0x573800cd,"openfl._internal.formats.animate.AnimateFrame.new","openfl/_internal/formats/animate/AnimateFrame.hx",15,0x1cd8cb7f)
namespace openfl{
namespace _internal{
namespace formats{
namespace animate{

void AnimateFrame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7b5fd2a58fd67c03_15_new)
            	}

Dynamic AnimateFrame_obj::__CreateEmpty() { return new AnimateFrame_obj; }

void *AnimateFrame_obj::_hx_vtable = 0;

Dynamic AnimateFrame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimateFrame_obj > _hx_result = new AnimateFrame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39e2c1b5;
}


AnimateFrame_obj::AnimateFrame_obj()
{
}

void AnimateFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateFrame);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(scriptSource,"scriptSource");
	HX_MARK_END_CLASS();
}

void AnimateFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(scriptSource,"scriptSource");
}

hx::Val AnimateFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return hx::Val( label ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return hx::Val( script ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return hx::Val( objects ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { return hx::Val( scriptSource ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimateFrame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { scriptSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("scriptSource",46,0d,c1,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AnimateFrame_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AnimateFrame_obj,label),HX_("label",f4,0d,af,6f)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateFrame_obj,objects),HX_("objects",d4,68,4f,82)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimateFrame_obj,script),HX_("script",0b,4e,60,47)},
	{hx::fsString,(int)offsetof(AnimateFrame_obj,scriptSource),HX_("scriptSource",46,0d,c1,c9)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimateFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateFrame_obj_sMemberFields[] = {
	HX_("label",f4,0d,af,6f),
	HX_("objects",d4,68,4f,82),
	HX_("script",0b,4e,60,47),
	HX_("scriptSource",46,0d,c1,c9),
	::String(null()) };

hx::Class AnimateFrame_obj::__mClass;

void AnimateFrame_obj::__register()
{
	AnimateFrame_obj _hx_dummy;
	AnimateFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.animate.AnimateFrame",5b,96,02,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimateFrame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimateFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateFrame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace animate
