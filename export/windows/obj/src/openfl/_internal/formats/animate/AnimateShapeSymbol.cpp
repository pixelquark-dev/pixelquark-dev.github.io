// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateBitmapSymbol
#include <openfl/_internal/formats/animate/AnimateBitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateLibrary
#include <openfl/_internal/formats/animate/AnimateLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateShapeSymbol
#include <openfl/_internal/formats/animate/AnimateShapeSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateSymbol
#include <openfl/_internal/formats/animate/AnimateSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_ShapeCommand
#include <openfl/_internal/formats/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24f74da056cadd3e_31_new,"openfl._internal.formats.animate.AnimateShapeSymbol","new",0x843b3a79,"openfl._internal.formats.animate.AnimateShapeSymbol.new","openfl/_internal/formats/animate/AnimateShapeSymbol.hx",31,0x00d84053)
HX_LOCAL_STACK_FRAME(_hx_pos_24f74da056cadd3e_35___createObject,"openfl._internal.formats.animate.AnimateShapeSymbol","__createObject",0x4ee3cc82,"openfl._internal.formats.animate.AnimateShapeSymbol.__createObject","openfl/_internal/formats/animate/AnimateShapeSymbol.hx",35,0x00d84053)
namespace openfl{
namespace _internal{
namespace formats{
namespace animate{

void AnimateShapeSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24f74da056cadd3e_31_new)
HXDLIN(  31)		super::__construct();
            	}

Dynamic AnimateShapeSymbol_obj::__CreateEmpty() { return new AnimateShapeSymbol_obj; }

void *AnimateShapeSymbol_obj::_hx_vtable = 0;

Dynamic AnimateShapeSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimateShapeSymbol_obj > _hx_result = new AnimateShapeSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimateShapeSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2206ca08) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2206ca08;
	} else {
		return inClassId==(int)0x74f8a551;
	}
}

 ::openfl::display::DisplayObject AnimateShapeSymbol_obj::_hx___createObject( ::openfl::_internal::formats::animate::AnimateLibrary library){
            	HX_GC_STACKFRAME(&_hx_pos_24f74da056cadd3e_35___createObject)
HXLINE(  36)		 ::openfl::display::Shape shape =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  37)		 ::openfl::display::Graphics graphics = shape->get_graphics();
HXLINE(  39)		if (hx::IsNotNull( this->rendered )) {
HXLINE(  41)			graphics->copyFrom(this->rendered->get_graphics());
HXLINE(  42)			return shape;
            		}
HXLINE(  45)		{
HXLINE(  45)			int _g = 0;
HXDLIN(  45)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  45)			while((_g < _g1->length)){
HXLINE(  45)				 ::openfl::_internal::formats::swf::ShapeCommand command = _g1->__get(_g).StaticCast<  ::openfl::_internal::formats::swf::ShapeCommand >();
HXDLIN(  45)				_g = (_g + 1);
HXLINE(  47)				switch((int)(command->_hx_getIndex())){
            					case (int)0: {
HXLINE(  52)						bool smooth = command->_hx_getBool(3);
HXDLIN(  52)						bool repeat = command->_hx_getBool(2);
HXDLIN(  52)						 ::openfl::geom::Matrix matrix = command->_hx_getObject(1).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  52)						int bitmapID = command->_hx_getInt(0);
HXDLIN(  52)						{
HXLINE(  54)							 ::openfl::_internal::formats::animate::AnimateBitmapSymbol bitmapSymbol = ( ( ::openfl::_internal::formats::animate::AnimateBitmapSymbol)(library->symbols->get(bitmapID)) );
HXLINE(  55)							 ::lime::graphics::Image bitmap = library->getImage(bitmapSymbol->path);
HXLINE(  57)							if (hx::IsNotNull( bitmap )) {
HXLINE(  59)								graphics->beginBitmapFill(::openfl::display::BitmapData_obj::fromImage(bitmap,null()),matrix,repeat,smooth);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  49)						Float alpha = command->_hx_getFloat(1);
HXDLIN(  49)						int color = command->_hx_getInt(0);
HXLINE(  50)						graphics->beginFill(color,alpha);
            					}
            					break;
            					case (int)2: {
HXLINE(  63)						Float focalPointRatio = command->_hx_getFloat(7);
HXDLIN(  63)						 ::Dynamic interpolationMethod = command->_hx_getObject(6);
HXDLIN(  63)						 ::Dynamic spreadMethod = command->_hx_getObject(5);
HXDLIN(  63)						 ::openfl::geom::Matrix matrix1 = command->_hx_getObject(4).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  63)						::Array< int > ratios = command->_hx_getObject(3).StaticCast< ::Array< int > >();
HXDLIN(  63)						::Array< Float > alphas = command->_hx_getObject(2).StaticCast< ::Array< Float > >();
HXDLIN(  63)						::Array< int > colors = command->_hx_getObject(1).StaticCast< ::Array< int > >();
HXDLIN(  63)						 ::Dynamic fillType = command->_hx_getObject(0);
HXLINE(  67)						graphics->beginGradientFill(fillType,colors,alphas,ratios,matrix1,spreadMethod,interpolationMethod,focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE(  70)						Float anchorY = command->_hx_getFloat(3);
HXDLIN(  70)						Float anchorX = command->_hx_getFloat(2);
HXDLIN(  70)						Float controlY = command->_hx_getFloat(1);
HXDLIN(  70)						Float controlX = command->_hx_getFloat(0);
HXLINE(  71)						graphics->curveTo(controlX,controlY,anchorX,anchorY);
            					}
            					break;
            					case (int)4: {
HXLINE(  74)						graphics->endFill();
            					}
            					break;
            					case (int)5: {
HXLINE(  76)						 ::Dynamic miterLimit = command->_hx_getObject(7);
HXDLIN(  76)						 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  76)						 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  76)						 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  76)						 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  76)						 ::Dynamic alpha1 = command->_hx_getObject(2);
HXDLIN(  76)						 ::Dynamic color1 = command->_hx_getObject(1);
HXDLIN(  76)						 ::Dynamic thickness = command->_hx_getObject(0);
HXLINE(  77)						if (hx::IsNotNull( thickness )) {
HXLINE(  79)							graphics->lineStyle(thickness,color1,alpha1,pixelHinting,scaleMode,caps,joints,miterLimit);
            						}
            						else {
HXLINE(  84)							graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)6: {
HXLINE(  87)						Float y = command->_hx_getFloat(1);
HXDLIN(  87)						Float x = command->_hx_getFloat(0);
HXLINE(  88)						graphics->lineTo(x,y);
            					}
            					break;
            					case (int)7: {
HXLINE(  90)						Float y1 = command->_hx_getFloat(1);
HXDLIN(  90)						Float x1 = command->_hx_getFloat(0);
HXLINE(  91)						graphics->moveTo(x1,y1);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  95)		this->commands = null();
HXLINE(  96)		this->rendered =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  97)		 ::openfl::display::Graphics _hx_tmp = this->rendered->get_graphics();
HXDLIN(  97)		_hx_tmp->copyFrom(shape->get_graphics());
HXLINE(  99)		return shape;
            	}



hx::ObjectPtr< AnimateShapeSymbol_obj > AnimateShapeSymbol_obj::__new() {
	hx::ObjectPtr< AnimateShapeSymbol_obj > __this = new AnimateShapeSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AnimateShapeSymbol_obj > AnimateShapeSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	AnimateShapeSymbol_obj *__this = (AnimateShapeSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimateShapeSymbol_obj), true, "openfl._internal.formats.animate.AnimateShapeSymbol"));
	*(void **)__this = AnimateShapeSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimateShapeSymbol_obj::AnimateShapeSymbol_obj()
{
}

void AnimateShapeSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateShapeSymbol);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::formats::animate::AnimateSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimateShapeSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::formats::animate::AnimateSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AnimateShapeSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		if (HX_FIELD_EQ(inName,"rendered") ) { return hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimateShapeSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimateShapeSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("commands",c8,b0,55,be));
	outFields->push(HX_("rendered",35,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AnimateShapeSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimateShapeSymbol_obj,commands),HX_("commands",c8,b0,55,be)},
	{hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(AnimateShapeSymbol_obj,rendered),HX_("rendered",35,c5,db,b2)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimateShapeSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimateShapeSymbol_obj_sMemberFields[] = {
	HX_("commands",c8,b0,55,be),
	HX_("rendered",35,c5,db,b2),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

hx::Class AnimateShapeSymbol_obj::__mClass;

void AnimateShapeSymbol_obj::__register()
{
	AnimateShapeSymbol_obj _hx_dummy;
	AnimateShapeSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.animate.AnimateShapeSymbol",07,8a,a4,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimateShapeSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimateShapeSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimateShapeSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimateShapeSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace animate