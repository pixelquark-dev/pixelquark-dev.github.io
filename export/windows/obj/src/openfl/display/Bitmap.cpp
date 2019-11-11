// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DisplayObjectType
#include <openfl/_internal/renderer/DisplayObjectType.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_110_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",110,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_127___enterFrame,"openfl.display.Bitmap","__enterFrame",0x534728ca,"openfl.display.Bitmap.__enterFrame","openfl/display/Bitmap.hx",127,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_135___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",135,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_149___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",149,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_177___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",177,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_196_get_bitmapData,"openfl.display.Bitmap","get_bitmapData",0x619f7ef7,"openfl.display.Bitmap.get_bitmapData","openfl/display/Bitmap.hx",196,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_200_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",200,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_217_get_height,"openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",217,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_226_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",226,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_239_get_width,"openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",239,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_248_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",248,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing){
            		bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_110_new)
HXLINE( 111)		super::__construct();
HXLINE( 113)		this->_hx___type = ::openfl::_internal::renderer::DisplayObjectType_obj::BITMAP_dyn();
HXLINE( 115)		this->_hx___bitmapData = bitmapData;
HXLINE( 116)		this->pixelSnapping = pixelSnapping;
HXLINE( 117)		this->smoothing = smoothing;
HXLINE( 119)		if (hx::IsNull( pixelSnapping )) {
HXLINE( 121)			this->pixelSnapping = 1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3b5602c1;
	}
}

void Bitmap_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_127___enterFrame)
HXDLIN( 127)		bool _hx_tmp;
HXDLIN( 127)		bool _hx_tmp1;
HXDLIN( 127)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXDLIN( 127)			_hx_tmp1 = hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXDLIN( 127)			_hx_tmp1 = false;
            		}
HXDLIN( 127)		if (_hx_tmp1) {
HXDLIN( 127)			_hx_tmp = (this->_hx___bitmapData->image->version != this->_hx___imageVersion);
            		}
            		else {
HXDLIN( 127)			_hx_tmp = false;
            		}
HXDLIN( 127)		if (_hx_tmp) {
HXLINE( 129)			if (!(this->_hx___renderDirty)) {
HXLINE( 129)				this->_hx___renderDirty = true;
HXDLIN( 129)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_135___getBounds)
HXDLIN( 135)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 137)			 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 138)			bounds->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->_hx___bitmapData->width) ),( (Float)(this->_hx___bitmapData->height) ));
HXLINE( 139)			bounds->_hx___transform(bounds,matrix);
HXLINE( 141)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE( 143)			::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            		}
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_149___hitTest)
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		bool _hx_tmp1;
HXDLIN( 150)		if (!(!(hitObject->get_visible()))) {
HXLINE( 150)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 150)			_hx_tmp1 = true;
            		}
HXDLIN( 150)		if (!(_hx_tmp1)) {
HXLINE( 150)			_hx_tmp = hx::IsNull( this->_hx___bitmapData );
            		}
            		else {
HXLINE( 150)			_hx_tmp = true;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 150)			return false;
            		}
HXLINE( 151)		bool _hx_tmp2;
HXDLIN( 151)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE( 151)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 151)			_hx_tmp2 = false;
            		}
HXDLIN( 151)		if (_hx_tmp2) {
HXLINE( 151)			return false;
            		}
HXLINE( 153)		this->_hx___getRenderTransform();
HXLINE( 155)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 155)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 155)		Float px;
HXDLIN( 155)		if ((norm == 0)) {
HXLINE( 155)			px = -(_this->tx);
            		}
            		else {
HXLINE( 155)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 156)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 156)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 156)		Float py;
HXDLIN( 156)		if ((norm1 == 0)) {
HXLINE( 156)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 156)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 158)		bool _hx_tmp3;
HXDLIN( 158)		bool _hx_tmp4;
HXDLIN( 158)		bool _hx_tmp5;
HXDLIN( 158)		if ((px > 0)) {
HXLINE( 158)			_hx_tmp5 = (py > 0);
            		}
            		else {
HXLINE( 158)			_hx_tmp5 = false;
            		}
HXDLIN( 158)		if (_hx_tmp5) {
HXLINE( 158)			_hx_tmp4 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 158)			_hx_tmp4 = false;
            		}
HXDLIN( 158)		if (_hx_tmp4) {
HXLINE( 158)			_hx_tmp3 = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 158)			_hx_tmp3 = false;
            		}
HXDLIN( 158)		if (_hx_tmp3) {
HXLINE( 160)			bool _hx_tmp6;
HXDLIN( 160)			if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 160)				_hx_tmp6 = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE( 160)				_hx_tmp6 = false;
            			}
HXDLIN( 160)			if (_hx_tmp6) {
HXLINE( 162)				return false;
            			}
HXLINE( 165)			bool _hx_tmp7;
HXDLIN( 165)			if (hx::IsNotNull( stack )) {
HXLINE( 165)				_hx_tmp7 = !(interactiveOnly);
            			}
            			else {
HXLINE( 165)				_hx_tmp7 = false;
            			}
HXDLIN( 165)			if (_hx_tmp7) {
HXLINE( 167)				stack->push(hitObject);
            			}
HXLINE( 170)			return true;
            		}
HXLINE( 173)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_177___hitTestMask)
HXLINE( 178)		if (hx::IsNull( this->_hx___bitmapData )) {
HXLINE( 178)			return false;
            		}
HXLINE( 180)		this->_hx___getRenderTransform();
HXLINE( 182)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 182)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 182)		Float px;
HXDLIN( 182)		if ((norm == 0)) {
HXLINE( 182)			px = -(_this->tx);
            		}
            		else {
HXLINE( 182)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 183)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 183)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 183)		Float py;
HXDLIN( 183)		if ((norm1 == 0)) {
HXLINE( 183)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 183)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 185)		bool _hx_tmp;
HXDLIN( 185)		bool _hx_tmp1;
HXDLIN( 185)		bool _hx_tmp2;
HXDLIN( 185)		if ((px > 0)) {
HXLINE( 185)			_hx_tmp2 = (py > 0);
            		}
            		else {
HXLINE( 185)			_hx_tmp2 = false;
            		}
HXDLIN( 185)		if (_hx_tmp2) {
HXLINE( 185)			_hx_tmp1 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 185)			_hx_tmp1 = false;
            		}
HXDLIN( 185)		if (_hx_tmp1) {
HXLINE( 185)			_hx_tmp = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 185)			_hx_tmp = false;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 187)			return true;
            		}
HXLINE( 190)		return false;
            	}


 ::openfl::display::BitmapData Bitmap_obj::get_bitmapData(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_196_get_bitmapData)
HXDLIN( 196)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_bitmapData,return )

 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_200_set_bitmapData)
HXLINE( 201)		this->_hx___bitmapData = value;
HXLINE( 202)		this->smoothing = false;
HXLINE( 204)		if (!(this->_hx___renderDirty)) {
HXLINE( 204)			this->_hx___renderDirty = true;
HXDLIN( 204)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 206)		bool _hx_tmp = hx::IsNotNull( this->_hx___filters );
HXLINE( 211)		this->_hx___imageVersion = -1;
HXLINE( 213)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_217_get_height)
HXLINE( 218)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 220)			int _hx_tmp = this->_hx___bitmapData->height;
HXDLIN( 220)			return (( (Float)(_hx_tmp) ) * ::Math_obj::abs(this->get_scaleY()));
            		}
HXLINE( 222)		return ( (Float)(0) );
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_226_set_height)
HXLINE( 227)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 229)			this->set_scaleY((value / ( (Float)(this->_hx___bitmapData->height) )));
            		}
            		else {
HXLINE( 233)			this->set_scaleY(( (Float)(0) ));
            		}
HXLINE( 235)		return value;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_239_get_width)
HXLINE( 240)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 242)			return (( (Float)(this->_hx___bitmapData->width) ) * ::Math_obj::abs(this->_hx___scaleX));
            		}
HXLINE( 244)		return ( (Float)(0) );
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_248_set_width)
HXLINE( 249)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 251)			this->set_scaleX((value / ( (Float)(this->_hx___bitmapData->width) )));
            		}
            		else {
HXLINE( 255)			this->set_scaleX(( (Float)(0) ));
            		}
HXLINE( 257)		return value;
            	}



hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bitmapData() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return hx::Val( _hx___bitmapData ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { return hx::Val( _hx___imageVersion ); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return hx::Val( get_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { _hx___imageVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	outFields->push(HX_("pixelSnapping",62,ae,a1,b8));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("__bitmapData",d9,30,54,6c));
	outFields->push(HX_("__imageVersion",1d,e4,7a,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_("pixelSnapping",62,ae,a1,b8)},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Bitmap_obj,_hx___bitmapData),HX_("__bitmapData",d9,30,54,6c)},
	{hx::fsInt,(int)offsetof(Bitmap_obj,_hx___imageVersion),HX_("__imageVersion",1d,e4,7a,8d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_("pixelSnapping",62,ae,a1,b8),
	HX_("smoothing",74,d5,e1,95),
	HX_("__bitmapData",d9,30,54,6c),
	HX_("__imageVersion",1d,e4,7a,8d),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_bitmapData",02,3e,b6,a9),
	HX_("set_bitmapData",76,26,d6,c9),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	Bitmap_obj _hx_dummy;
	Bitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Bitmap",d9,2f,4d,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
