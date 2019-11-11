// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_56_new,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","new",0xac4e6a46,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.new","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",56,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_17_get_LEFT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_STICK_X",0xef3753b4,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",17,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_22_get_LEFT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_STICK_Y",0xef3753b5,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",22,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_27_get_RIGHT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_STICK_X",0xd1775543,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",27,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_32_get_RIGHT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_STICK_Y",0xd1775544,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",32,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_37_get_LEFT_TRIGGER,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_TRIGGER",0x4eb7cc83,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",37,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_42_get_RIGHT_TRIGGER,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_TRIGGER",0x30f7ce12,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",42,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_47_get_POINTER_X,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_POINTER_X",0xc8c61233,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_POINTER_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",47,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_52_get_POINTER_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_POINTER_Y",0xc8c61234,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_POINTER_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",52,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_61_getAxis,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getAxis",0x00e0513d,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",61,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_66_getXAxis,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getXAxis",0xdd4eb91d,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getXAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",66,0xefa13aee)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa72059ea8baa0e_71_getYAxis,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getYAxis",0x70b54d9e,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getYAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",71,0xefa13aee)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadAnalogValueList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_56_new)
HXDLIN(  56)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadAnalogValueList_obj::__CreateEmpty() { return new FlxGamepadAnalogValueList_obj; }

void *FlxGamepadAnalogValueList_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogValueList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadAnalogValueList_obj > _hx_result = new FlxGamepadAnalogValueList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadAnalogValueList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x564124ae;
}

Float FlxGamepadAnalogValueList_obj::get_LEFT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_17_get_LEFT_STICK_X)
HXDLIN(  17)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  17)		return _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_STICK_X,return )

Float FlxGamepadAnalogValueList_obj::get_LEFT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_22_get_LEFT_STICK_Y)
HXDLIN(  22)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  22)		return _this->getYAxisRaw(_this->mapping->getAnalogStick(19));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_STICK_Y,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_27_get_RIGHT_STICK_X)
HXDLIN(  27)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  27)		return _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_STICK_X,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_32_get_RIGHT_STICK_Y)
HXDLIN(  32)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  32)		return _this->getYAxisRaw(_this->mapping->getAnalogStick(20));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_STICK_Y,return )

Float FlxGamepadAnalogValueList_obj::get_LEFT_TRIGGER(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_37_get_LEFT_TRIGGER)
HXDLIN(  37)		return this->gamepad->getAxis(17);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_TRIGGER,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_TRIGGER(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_42_get_RIGHT_TRIGGER)
HXDLIN(  42)		return this->gamepad->getAxis(18);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_TRIGGER,return )

Float FlxGamepadAnalogValueList_obj::get_POINTER_X(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_47_get_POINTER_X)
HXDLIN(  47)		return this->gamepad->getAxis(28);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_POINTER_X,return )

Float FlxGamepadAnalogValueList_obj::get_POINTER_Y(){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_52_get_POINTER_Y)
HXDLIN(  52)		return this->gamepad->getAxis(29);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_POINTER_Y,return )

Float FlxGamepadAnalogValueList_obj::getAxis(int id){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_61_getAxis)
HXDLIN(  61)		return this->gamepad->getAxis(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getAxis,return )

Float FlxGamepadAnalogValueList_obj::getXAxis(int id){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_66_getXAxis)
HXDLIN(  66)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  66)		return _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(id));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getXAxis,return )

Float FlxGamepadAnalogValueList_obj::getYAxis(int id){
            	HX_STACKFRAME(&_hx_pos_1fa72059ea8baa0e_71_getYAxis)
HXDLIN(  71)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  71)		return _this->getYAxisRaw(_this->mapping->getAnalogStick(id));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getYAxis,return )


hx::ObjectPtr< FlxGamepadAnalogValueList_obj > FlxGamepadAnalogValueList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad) {
	hx::ObjectPtr< FlxGamepadAnalogValueList_obj > __this = new FlxGamepadAnalogValueList_obj();
	__this->__construct(gamepad);
	return __this;
}

hx::ObjectPtr< FlxGamepadAnalogValueList_obj > FlxGamepadAnalogValueList_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadAnalogValueList_obj *__this = (FlxGamepadAnalogValueList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogValueList_obj), true, "flixel.input.gamepad.lists.FlxGamepadAnalogValueList"));
	*(void **)__this = FlxGamepadAnalogValueList_obj::_hx_vtable;
	__this->__construct(gamepad);
	return __this;
}

FlxGamepadAnalogValueList_obj::FlxGamepadAnalogValueList_obj()
{
}

void FlxGamepadAnalogValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

hx::Val FlxGamepadAnalogValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return hx::Val( getAxis_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return hx::Val( getXAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return hx::Val( getYAxis_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"POINTER_X") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_POINTER_X() ); }
		if (HX_FIELD_EQ(inName,"POINTER_Y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_POINTER_Y() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_X") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_LEFT_STICK_X() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_LEFT_STICK_Y() ); }
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_LEFT_TRIGGER() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_X") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_RIGHT_STICK_X() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_RIGHT_STICK_Y() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_RIGHT_TRIGGER() ); }
		if (HX_FIELD_EQ(inName,"get_POINTER_X") ) { return hx::Val( get_POINTER_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_POINTER_Y") ) { return hx::Val( get_POINTER_Y_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_X") ) { return hx::Val( get_LEFT_STICK_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_Y") ) { return hx::Val( get_LEFT_STICK_Y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER") ) { return hx::Val( get_LEFT_TRIGGER_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_X") ) { return hx::Val( get_RIGHT_STICK_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_Y") ) { return hx::Val( get_RIGHT_STICK_Y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER") ) { return hx::Val( get_RIGHT_TRIGGER_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadAnalogValueList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gamepad",a1,e0,85,89));
	outFields->push(HX_("LEFT_STICK_X",d1,b8,45,8c));
	outFields->push(HX_("LEFT_STICK_Y",d2,b8,45,8c));
	outFields->push(HX_("RIGHT_STICK_X",86,69,01,a1));
	outFields->push(HX_("RIGHT_STICK_Y",87,69,01,a1));
	outFields->push(HX_("LEFT_TRIGGER",a0,31,c6,eb));
	outFields->push(HX_("RIGHT_TRIGGER",55,e2,81,00));
	outFields->push(HX_("POINTER_X",f6,08,fa,28));
	outFields->push(HX_("POINTER_Y",f7,08,fa,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadAnalogValueList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxGamepadAnalogValueList_obj,gamepad),HX_("gamepad",a1,e0,85,89)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadAnalogValueList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogValueList_obj_sMemberFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("get_LEFT_STICK_X",5a,a5,e4,90),
	HX_("get_LEFT_STICK_Y",5b,a5,e4,90),
	HX_("get_RIGHT_STICK_X",dd,74,71,a7),
	HX_("get_RIGHT_STICK_Y",de,74,71,a7),
	HX_("get_LEFT_TRIGGER",29,1e,65,f0),
	HX_("get_RIGHT_TRIGGER",ac,ed,f1,06),
	HX_("get_POINTER_X",cd,dc,5d,ea),
	HX_("get_POINTER_Y",ce,dc,5d,ea),
	HX_("getAxis",57,cc,fb,12),
	HX_("getXAxis",c3,f4,3e,a3),
	HX_("getYAxis",44,89,a5,36),
	::String(null()) };

hx::Class FlxGamepadAnalogValueList_obj::__mClass;

void FlxGamepadAnalogValueList_obj::__register()
{
	FlxGamepadAnalogValueList_obj _hx_dummy;
	FlxGamepadAnalogValueList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxGamepadAnalogValueList",54,8f,f6,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadAnalogValueList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogValueList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogValueList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogValueList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
