// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_11_new,"flixel.util.helpers.FlxPointRangeBounds","new",0x02dca7c3,"flixel.util.helpers.FlxPointRangeBounds.new","flixel/util/helpers/FlxPointRangeBounds.hx",11,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_64_set,"flixel.util.helpers.FlxPointRangeBounds","set",0x02e07305,"flixel.util.helpers.FlxPointRangeBounds.set","flixel/util/helpers/FlxPointRangeBounds.hx",64,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_85_equals,"flixel.util.helpers.FlxPointRangeBounds","equals",0x60ba96bc,"flixel.util.helpers.FlxPointRangeBounds.equals","flixel/util/helpers/FlxPointRangeBounds.hx",85,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_96_toString,"flixel.util.helpers.FlxPointRangeBounds","toString",0x58cf5269,"flixel.util.helpers.FlxPointRangeBounds.toString","flixel/util/helpers/FlxPointRangeBounds.hx",96,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_109_destroy,"flixel.util.helpers.FlxPointRangeBounds","destroy",0x3271f1dd,"flixel.util.helpers.FlxPointRangeBounds.destroy","flixel/util/helpers/FlxPointRangeBounds.hx",109,0x6e9a8e2e)
namespace flixel{
namespace util{
namespace helpers{

void FlxPointRangeBounds_obj::__construct(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY){
            	HX_GC_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_11_new)
HXLINE(  26)		this->active = true;
HXLINE(  43)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  43)		point->_inPool = false;
HXDLIN(  43)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  43)		point1->_inPool = false;
HXDLIN(  43)		this->start =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,point,point1);
HXLINE(  44)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  44)		point2->_inPool = false;
HXDLIN(  44)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  44)		point3->_inPool = false;
HXDLIN(  44)		this->end =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,point2,point3);
HXLINE(  46)		this->set(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
            	}

Dynamic FlxPointRangeBounds_obj::__CreateEmpty() { return new FlxPointRangeBounds_obj; }

void *FlxPointRangeBounds_obj::_hx_vtable = 0;

Dynamic FlxPointRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxPointRangeBounds_obj > _hx_result = new FlxPointRangeBounds_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxPointRangeBounds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1881b2b1;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_helpers_FlxPointRangeBounds__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::helpers::FlxPointRangeBounds_obj::destroy,
};

void *FlxPointRangeBounds_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_helpers_FlxPointRangeBounds__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::util::helpers::FlxPointRangeBounds FlxPointRangeBounds_obj::set(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_64_set)
HXLINE(  65)		( ( ::flixel::math::FlxPoint)(this->start->min) )->set_x(startMinX);
HXLINE(  66)		Float _hx_tmp;
HXDLIN(  66)		if (hx::IsNull( startMinY )) {
HXLINE(  66)			_hx_tmp = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  66)			_hx_tmp = ( (Float)(startMinY) );
            		}
HXDLIN(  66)		( ( ::flixel::math::FlxPoint)(this->start->min) )->set_y(_hx_tmp);
HXLINE(  67)		Float _hx_tmp1;
HXDLIN(  67)		if (hx::IsNull( startMaxX )) {
HXLINE(  67)			_hx_tmp1 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = ( (Float)(startMaxX) );
            		}
HXDLIN(  67)		( ( ::flixel::math::FlxPoint)(this->start->max) )->set_x(_hx_tmp1);
HXLINE(  68)		Float _hx_tmp2;
HXDLIN(  68)		if (hx::IsNull( startMaxY )) {
HXLINE(  68)			_hx_tmp2 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
            		}
            		else {
HXLINE(  68)			_hx_tmp2 = ( (Float)(startMaxY) );
            		}
HXDLIN(  68)		( ( ::flixel::math::FlxPoint)(this->start->max) )->set_y(_hx_tmp2);
HXLINE(  69)		Float _hx_tmp3;
HXDLIN(  69)		if (hx::IsNull( endMinX )) {
HXLINE(  69)			_hx_tmp3 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  69)			_hx_tmp3 = ( (Float)(endMinX) );
            		}
HXDLIN(  69)		( ( ::flixel::math::FlxPoint)(this->end->min) )->set_x(_hx_tmp3);
HXLINE(  70)		Float _hx_tmp4;
HXDLIN(  70)		if (hx::IsNull( endMinY )) {
HXLINE(  70)			_hx_tmp4 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
            		}
            		else {
HXLINE(  70)			_hx_tmp4 = ( (Float)(endMinY) );
            		}
HXDLIN(  70)		( ( ::flixel::math::FlxPoint)(this->end->min) )->set_y(_hx_tmp4);
HXLINE(  71)		Float _hx_tmp5;
HXDLIN(  71)		if (hx::IsNull( endMaxX )) {
HXLINE(  71)			if (hx::IsNull( endMinX )) {
HXLINE(  71)				_hx_tmp5 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->x;
            			}
            			else {
HXLINE(  71)				_hx_tmp5 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->x;
            			}
            		}
            		else {
HXLINE(  71)			_hx_tmp5 = ( (Float)(endMaxX) );
            		}
HXDLIN(  71)		( ( ::flixel::math::FlxPoint)(this->end->max) )->set_x(_hx_tmp5);
HXLINE(  72)		Float _hx_tmp6;
HXDLIN(  72)		if (hx::IsNull( endMaxY )) {
HXLINE(  72)			if (hx::IsNull( endMinY )) {
HXLINE(  72)				_hx_tmp6 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->y;
            			}
            			else {
HXLINE(  72)				_hx_tmp6 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->y;
            			}
            		}
            		else {
HXLINE(  72)			_hx_tmp6 = ( (Float)(endMaxY) );
            		}
HXDLIN(  72)		( ( ::flixel::math::FlxPoint)(this->end->max) )->set_y(_hx_tmp6);
HXLINE(  74)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxPointRangeBounds_obj,set,return )

bool FlxPointRangeBounds_obj::equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_85_equals)
HXDLIN(  85)		bool _hx_tmp;
HXDLIN(  85)		bool _hx_tmp1;
HXDLIN(  85)		 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(this->start->min) );
HXDLIN(  85)		 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->start->min) );
HXDLIN(  85)		bool result;
HXDLIN(  85)		if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXDLIN(  85)			result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN(  85)			result = false;
            		}
HXDLIN(  85)		if (point->_weak) {
HXDLIN(  85)			point->put();
            		}
HXDLIN(  85)		if (result) {
HXLINE(  86)			 ::flixel::math::FlxPoint _this1 = ( ( ::flixel::math::FlxPoint)(this->start->max) );
HXDLIN(  86)			 ::flixel::math::FlxPoint point1 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->start->max) );
HXDLIN(  86)			bool result1;
HXDLIN(  86)			if ((::Math_obj::abs((_this1->x - point1->x)) <= ((Float)0.0000001))) {
HXLINE(  86)				result1 = (::Math_obj::abs((_this1->y - point1->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  86)				result1 = false;
            			}
HXDLIN(  86)			if (point1->_weak) {
HXLINE(  86)				point1->put();
            			}
HXLINE(  85)			_hx_tmp1 = result1;
            		}
            		else {
HXDLIN(  85)			_hx_tmp1 = false;
            		}
HXDLIN(  85)		if (_hx_tmp1) {
HXLINE(  87)			 ::flixel::math::FlxPoint _this2 = ( ( ::flixel::math::FlxPoint)(this->end->min) );
HXDLIN(  87)			 ::flixel::math::FlxPoint point2 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->end->min) );
HXDLIN(  87)			bool result2;
HXDLIN(  87)			if ((::Math_obj::abs((_this2->x - point2->x)) <= ((Float)0.0000001))) {
HXLINE(  87)				result2 = (::Math_obj::abs((_this2->y - point2->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  87)				result2 = false;
            			}
HXDLIN(  87)			if (point2->_weak) {
HXLINE(  87)				point2->put();
            			}
HXLINE(  85)			_hx_tmp = result2;
            		}
            		else {
HXDLIN(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  88)			 ::flixel::math::FlxPoint _this3 = ( ( ::flixel::math::FlxPoint)(this->end->max) );
HXDLIN(  88)			 ::flixel::math::FlxPoint point3 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->end->max) );
HXDLIN(  88)			bool result3;
HXDLIN(  88)			if ((::Math_obj::abs((_this3->x - point3->x)) <= ((Float)0.0000001))) {
HXLINE(  88)				result3 = (::Math_obj::abs((_this3->y - point3->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  88)				result3 = false;
            			}
HXDLIN(  88)			if (point3->_weak) {
HXLINE(  88)				point3->put();
            			}
HXDLIN(  88)			return result3;
            		}
            		else {
HXDLIN(  85)			return false;
            		}
HXDLIN(  85)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointRangeBounds_obj,equals,return )

::String FlxPointRangeBounds_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_96_toString)
HXLINE(  97)		 ::Dynamic value = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
HXDLIN(  97)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  97)		_this->label = HX_("start.min.x",90,c5,24,b0);
HXDLIN(  97)		_this->value = value;
HXLINE(  98)		 ::Dynamic value1 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
HXDLIN(  98)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  98)		_this1->label = HX_("start.min.y",91,c5,24,b0);
HXDLIN(  98)		_this1->value = value1;
HXLINE(  99)		 ::Dynamic value2 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->x;
HXDLIN(  99)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  99)		_this2->label = HX_("start.max.x",22,a7,e2,aa);
HXDLIN(  99)		_this2->value = value2;
HXLINE( 100)		 ::Dynamic value3 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->y;
HXDLIN( 100)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 100)		_this3->label = HX_("start.max.y",23,a7,e2,aa);
HXDLIN( 100)		_this3->value = value3;
HXLINE( 101)		 ::Dynamic value4 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->x;
HXDLIN( 101)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 101)		_this4->label = HX_("end.min.x",c9,b5,20,78);
HXDLIN( 101)		_this4->value = value4;
HXLINE( 102)		 ::Dynamic value5 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->y;
HXDLIN( 102)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 102)		_this5->label = HX_("end.min.y",ca,b5,20,78);
HXDLIN( 102)		_this5->value = value5;
HXLINE( 103)		 ::Dynamic value6 = ( ( ::flixel::math::FlxPoint)(this->end->max) )->x;
HXDLIN( 103)		 ::flixel::util::LabelValuePair _this6 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 103)		_this6->label = HX_("end.max.x",5b,97,de,72);
HXDLIN( 103)		_this6->value = value6;
HXLINE( 104)		 ::Dynamic value7 = ( ( ::flixel::math::FlxPoint)(this->end->max) )->y;
HXDLIN( 104)		 ::flixel::util::LabelValuePair _this7 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 104)		_this7->label = HX_("end.max.y",5c,97,de,72);
HXDLIN( 104)		_this7->value = value7;
HXLINE(  96)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(8)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5)->init(6,_this6)->init(7,_this7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,toString,return )

void FlxPointRangeBounds_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_109_destroy)
HXLINE( 110)		this->start->min = ::flixel::util::FlxDestroyUtil_obj::put(this->start->min);
HXLINE( 111)		this->start->max = ::flixel::util::FlxDestroyUtil_obj::put(this->start->max);
HXLINE( 112)		this->end->min = ::flixel::util::FlxDestroyUtil_obj::put(this->end->min);
HXLINE( 113)		this->end->max = ::flixel::util::FlxDestroyUtil_obj::put(this->end->max);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,destroy,(void))


hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__new(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY) {
	hx::ObjectPtr< FlxPointRangeBounds_obj > __this = new FlxPointRangeBounds_obj();
	__this->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return __this;
}

hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__alloc(hx::Ctx *_hx_ctx,Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY) {
	FlxPointRangeBounds_obj *__this = (FlxPointRangeBounds_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxPointRangeBounds_obj), true, "flixel.util.helpers.FlxPointRangeBounds"));
	*(void **)__this = FlxPointRangeBounds_obj::_hx_vtable;
	__this->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return __this;
}

FlxPointRangeBounds_obj::FlxPointRangeBounds_obj()
{
}

void FlxPointRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPointRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxPointRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

hx::Val FlxPointRangeBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxPointRangeBounds_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPointRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("active",c6,41,46,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FlxPointRangeBounds_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::flixel::util::helpers::FlxBounds */ ,(int)offsetof(FlxPointRangeBounds_obj,start),HX_("start",62,74,0b,84)},
	{hx::fsObject /*  ::flixel::util::helpers::FlxBounds */ ,(int)offsetof(FlxPointRangeBounds_obj,end),HX_("end",db,03,4d,00)},
	{hx::fsBool,(int)offsetof(FlxPointRangeBounds_obj,active),HX_("active",c6,41,46,16)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxPointRangeBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPointRangeBounds_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("active",c6,41,46,16),
	HX_("set",a2,9b,57,00),
	HX_("equals",3f,ee,f2,bf),
	HX_("toString",ac,d0,6e,38),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

hx::Class FlxPointRangeBounds_obj::__mClass;

void FlxPointRangeBounds_obj::__register()
{
	FlxPointRangeBounds_obj _hx_dummy;
	FlxPointRangeBounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.util.helpers.FlxPointRangeBounds",51,0a,5f,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxPointRangeBounds_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPointRangeBounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPointRangeBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPointRangeBounds_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
