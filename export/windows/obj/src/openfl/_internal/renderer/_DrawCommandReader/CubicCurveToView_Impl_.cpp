// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_CubicCurveToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/CubicCurveToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_471__new,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","_new",0x4a8bb022,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",471,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_480_get_controlX1,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlX1",0x39f1626c,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlX1","openfl/_internal/renderer/DrawCommandReader.hx",480,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_487_get_controlY1,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlY1",0x39f1634b,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlY1","openfl/_internal/renderer/DrawCommandReader.hx",487,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_494_get_controlX2,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlX2",0x39f1626d,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlX2","openfl/_internal/renderer/DrawCommandReader.hx",494,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_501_get_controlY2,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlY2",0x39f1634c,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlY2","openfl/_internal/renderer/DrawCommandReader.hx",501,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_508_get_anchorX,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_anchorX",0x7a5efbb9,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_anchorX","openfl/_internal/renderer/DrawCommandReader.hx",508,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4f19ba035647f3fc_515_get_anchorY,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_anchorY",0x7a5efbba,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_anchorY","openfl/_internal/renderer/DrawCommandReader.hx",515,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void CubicCurveToView_Impl__obj::__construct() { }

Dynamic CubicCurveToView_Impl__obj::__CreateEmpty() { return new CubicCurveToView_Impl__obj; }

void *CubicCurveToView_Impl__obj::_hx_vtable = 0;

Dynamic CubicCurveToView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubicCurveToView_Impl__obj > _hx_result = new CubicCurveToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubicCurveToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33dbfa1f;
}

 ::openfl::_internal::renderer::DrawCommandReader CubicCurveToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_471__new)
HXDLIN( 471)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 471)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,_new,return )

Float CubicCurveToView_Impl__obj::get_controlX1( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_480_get_controlX1)
HXDLIN( 480)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX1,return )

Float CubicCurveToView_Impl__obj::get_controlY1( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_487_get_controlY1)
HXDLIN( 487)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY1,return )

Float CubicCurveToView_Impl__obj::get_controlX2( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_494_get_controlX2)
HXDLIN( 494)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX2,return )

Float CubicCurveToView_Impl__obj::get_controlY2( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_501_get_controlY2)
HXDLIN( 501)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY2,return )

Float CubicCurveToView_Impl__obj::get_anchorX( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_508_get_anchorX)
HXDLIN( 508)		return this1->buffer->f->__get((this1->fPos + 4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorX,return )

Float CubicCurveToView_Impl__obj::get_anchorY( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_4f19ba035647f3fc_515_get_anchorY)
HXDLIN( 515)		return this1->buffer->f->__get((this1->fPos + 5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorY,return )


CubicCurveToView_Impl__obj::CubicCurveToView_Impl__obj()
{
}

bool CubicCurveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchorX") ) { outValue = get_anchorX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_anchorY") ) { outValue = get_anchorY_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_controlX1") ) { outValue = get_controlX1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlY1") ) { outValue = get_controlY1_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlX2") ) { outValue = get_controlX2_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_controlY2") ) { outValue = get_controlY2_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CubicCurveToView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CubicCurveToView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class CubicCurveToView_Impl__obj::__mClass;

static ::String CubicCurveToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_controlX1",4d,dd,9c,4e),
	HX_("get_controlY1",2c,de,9c,4e),
	HX_("get_controlX2",4e,dd,9c,4e),
	HX_("get_controlY2",2d,de,9c,4e),
	HX_("get_anchorX",5a,4c,9c,88),
	HX_("get_anchorY",5b,4c,9c,88),
	::String(null())
};

void CubicCurveToView_Impl__obj::__register()
{
	CubicCurveToView_Impl__obj _hx_dummy;
	CubicCurveToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_",4d,bd,4f,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubicCurveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CubicCurveToView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CubicCurveToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicCurveToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicCurveToView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
