// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DisplayObjectType
#include <openfl/_internal/renderer/DisplayObjectType.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::BITMAP;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::DISPLAY_OBJECT;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::DISPLAY_OBJECT_CONTAINER;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::DOM_ELEMENT;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::SHAPE;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::SIMPLE_BUTTON;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::TEXTFIELD;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::TILEMAP;

::openfl::_internal::renderer::DisplayObjectType DisplayObjectType_obj::VIDEO;

bool DisplayObjectType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) { outValue = DisplayObjectType_obj::BITMAP; return true; }
	if (inName==HX_("DISPLAY_OBJECT",7c,26,aa,ee)) { outValue = DisplayObjectType_obj::DISPLAY_OBJECT; return true; }
	if (inName==HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d)) { outValue = DisplayObjectType_obj::DISPLAY_OBJECT_CONTAINER; return true; }
	if (inName==HX_("DOM_ELEMENT",7f,ec,8c,c4)) { outValue = DisplayObjectType_obj::DOM_ELEMENT; return true; }
	if (inName==HX_("SHAPE",01,1b,0b,fa)) { outValue = DisplayObjectType_obj::SHAPE; return true; }
	if (inName==HX_("SIMPLE_BUTTON",9f,b9,48,3c)) { outValue = DisplayObjectType_obj::SIMPLE_BUTTON; return true; }
	if (inName==HX_("TEXTFIELD",cd,24,ac,01)) { outValue = DisplayObjectType_obj::TEXTFIELD; return true; }
	if (inName==HX_("TILEMAP",0e,c4,62,c5)) { outValue = DisplayObjectType_obj::TILEMAP; return true; }
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) { outValue = DisplayObjectType_obj::VIDEO; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DisplayObjectType_obj)

int DisplayObjectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return 0;
	if (inName==HX_("DISPLAY_OBJECT",7c,26,aa,ee)) return 1;
	if (inName==HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d)) return 2;
	if (inName==HX_("DOM_ELEMENT",7f,ec,8c,c4)) return 3;
	if (inName==HX_("SHAPE",01,1b,0b,fa)) return 4;
	if (inName==HX_("SIMPLE_BUTTON",9f,b9,48,3c)) return 5;
	if (inName==HX_("TEXTFIELD",cd,24,ac,01)) return 6;
	if (inName==HX_("TILEMAP",0e,c4,62,c5)) return 7;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return 8;
	return super::__FindIndex(inName);
}

int DisplayObjectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return 0;
	if (inName==HX_("DISPLAY_OBJECT",7c,26,aa,ee)) return 0;
	if (inName==HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d)) return 0;
	if (inName==HX_("DOM_ELEMENT",7f,ec,8c,c4)) return 0;
	if (inName==HX_("SHAPE",01,1b,0b,fa)) return 0;
	if (inName==HX_("SIMPLE_BUTTON",9f,b9,48,3c)) return 0;
	if (inName==HX_("TEXTFIELD",cd,24,ac,01)) return 0;
	if (inName==HX_("TILEMAP",0e,c4,62,c5)) return 0;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val DisplayObjectType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITMAP",ef,bb,8e,a3)) return BITMAP;
	if (inName==HX_("DISPLAY_OBJECT",7c,26,aa,ee)) return DISPLAY_OBJECT;
	if (inName==HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d)) return DISPLAY_OBJECT_CONTAINER;
	if (inName==HX_("DOM_ELEMENT",7f,ec,8c,c4)) return DOM_ELEMENT;
	if (inName==HX_("SHAPE",01,1b,0b,fa)) return SHAPE;
	if (inName==HX_("SIMPLE_BUTTON",9f,b9,48,3c)) return SIMPLE_BUTTON;
	if (inName==HX_("TEXTFIELD",cd,24,ac,01)) return TEXTFIELD;
	if (inName==HX_("TILEMAP",0e,c4,62,c5)) return TILEMAP;
	if (inName==HX_("VIDEO",5b,4c,ea,b4)) return VIDEO;
	return super::__Field(inName,inCallProp);
}

static ::String DisplayObjectType_obj_sStaticFields[] = {
	HX_("BITMAP",ef,bb,8e,a3),
	HX_("DISPLAY_OBJECT",7c,26,aa,ee),
	HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d),
	HX_("DOM_ELEMENT",7f,ec,8c,c4),
	HX_("SHAPE",01,1b,0b,fa),
	HX_("SIMPLE_BUTTON",9f,b9,48,3c),
	HX_("TEXTFIELD",cd,24,ac,01),
	HX_("TILEMAP",0e,c4,62,c5),
	HX_("VIDEO",5b,4c,ea,b4),
	::String(null())
};

hx::Class DisplayObjectType_obj::__mClass;

Dynamic __Create_DisplayObjectType_obj() { return new DisplayObjectType_obj; }

void DisplayObjectType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("openfl._internal.renderer.DisplayObjectType",20,8e,d7,63), hx::TCanCast< DisplayObjectType_obj >,DisplayObjectType_obj_sStaticFields,0,
	&__Create_DisplayObjectType_obj, &__Create,
	&super::__SGetClass(), &CreateDisplayObjectType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DisplayObjectType_obj::__GetStatic;
}

void DisplayObjectType_obj::__boot()
{
BITMAP = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("BITMAP",ef,bb,8e,a3),0);
DISPLAY_OBJECT = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("DISPLAY_OBJECT",7c,26,aa,ee),1);
DISPLAY_OBJECT_CONTAINER = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("DISPLAY_OBJECT_CONTAINER",5e,fa,3f,2d),2);
DOM_ELEMENT = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("DOM_ELEMENT",7f,ec,8c,c4),3);
SHAPE = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("SHAPE",01,1b,0b,fa),4);
SIMPLE_BUTTON = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("SIMPLE_BUTTON",9f,b9,48,3c),5);
TEXTFIELD = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("TEXTFIELD",cd,24,ac,01),6);
TILEMAP = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("TILEMAP",0e,c4,62,c5),7);
VIDEO = hx::CreateConstEnum< DisplayObjectType_obj >(HX_("VIDEO",5b,4c,ea,b4),8);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
