// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::BOTH;

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::ONLY_ANALOG;

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::ONLY_DIGITAL;

bool FlxAnalogToDigitalMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) { outValue = FlxAnalogToDigitalMode_obj::BOTH; return true; }
	if (inName==HX_("ONLY_ANALOG",e3,0b,a4,5d)) { outValue = FlxAnalogToDigitalMode_obj::ONLY_ANALOG; return true; }
	if (inName==HX_("ONLY_DIGITAL",a5,8e,4d,81)) { outValue = FlxAnalogToDigitalMode_obj::ONLY_DIGITAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxAnalogToDigitalMode_obj)

int FlxAnalogToDigitalMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return 0;
	if (inName==HX_("ONLY_ANALOG",e3,0b,a4,5d)) return 2;
	if (inName==HX_("ONLY_DIGITAL",a5,8e,4d,81)) return 1;
	return super::__FindIndex(inName);
}

int FlxAnalogToDigitalMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return 0;
	if (inName==HX_("ONLY_ANALOG",e3,0b,a4,5d)) return 0;
	if (inName==HX_("ONLY_DIGITAL",a5,8e,4d,81)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxAnalogToDigitalMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return BOTH;
	if (inName==HX_("ONLY_ANALOG",e3,0b,a4,5d)) return ONLY_ANALOG;
	if (inName==HX_("ONLY_DIGITAL",a5,8e,4d,81)) return ONLY_DIGITAL;
	return super::__Field(inName,inCallProp);
}

static ::String FlxAnalogToDigitalMode_obj_sStaticFields[] = {
	HX_("BOTH",81,50,dc,2b),
	HX_("ONLY_DIGITAL",a5,8e,4d,81),
	HX_("ONLY_ANALOG",e3,0b,a4,5d),
	::String(null())
};

hx::Class FlxAnalogToDigitalMode_obj::__mClass;

Dynamic __Create_FlxAnalogToDigitalMode_obj() { return new FlxAnalogToDigitalMode_obj; }

void FlxAnalogToDigitalMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("flixel.input.gamepad.FlxAnalogToDigitalMode",81,45,84,3c), hx::TCanCast< FlxAnalogToDigitalMode_obj >,FlxAnalogToDigitalMode_obj_sStaticFields,0,
	&__Create_FlxAnalogToDigitalMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAnalogToDigitalMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxAnalogToDigitalMode_obj::__GetStatic;
}

void FlxAnalogToDigitalMode_obj::__boot()
{
BOTH = hx::CreateConstEnum< FlxAnalogToDigitalMode_obj >(HX_("BOTH",81,50,dc,2b),0);
ONLY_ANALOG = hx::CreateConstEnum< FlxAnalogToDigitalMode_obj >(HX_("ONLY_ANALOG",e3,0b,a4,5d),2);
ONLY_DIGITAL = hx::CreateConstEnum< FlxAnalogToDigitalMode_obj >(HX_("ONLY_DIGITAL",a5,8e,4d,81),1);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
