// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineGradientStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineGradientStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_817__new,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","_new",0x223b6625,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",817,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_826_get_type,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_type",0x56d1b107,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_type","openfl/_internal/renderer/DrawCommandReader.hx",826,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_833_get_colors,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_colors",0x62b5713d,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_colors","openfl/_internal/renderer/DrawCommandReader.hx",833,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_840_get_alphas,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_alphas",0xde6a76e2,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_alphas","openfl/_internal/renderer/DrawCommandReader.hx",840,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_847_get_ratios,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_ratios",0x57b8e095,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_ratios","openfl/_internal/renderer/DrawCommandReader.hx",847,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_854_get_matrix,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_matrix",0x57f6e1ce,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",854,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_861_get_spreadMethod,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_spreadMethod",0x9d775901,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_spreadMethod","openfl/_internal/renderer/DrawCommandReader.hx",861,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_868_get_interpolationMethod,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_interpolationMethod",0xa82def78,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_interpolationMethod","openfl/_internal/renderer/DrawCommandReader.hx",868,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_875_get_focalPointRatio,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_focalPointRatio",0xd5f26c33,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_focalPointRatio","openfl/_internal/renderer/DrawCommandReader.hx",875,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineGradientStyleView_Impl__obj::__construct() { }

Dynamic LineGradientStyleView_Impl__obj::__CreateEmpty() { return new LineGradientStyleView_Impl__obj; }

void *LineGradientStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineGradientStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineGradientStyleView_Impl__obj > _hx_result = new LineGradientStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineGradientStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36add018;
}

 ::openfl::_internal::renderer::DrawCommandReader LineGradientStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_817__new)
HXDLIN( 817)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 817)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,_new,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_type( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_826_get_type)
HXDLIN( 826)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_type,return )

::Array< int > LineGradientStyleView_Impl__obj::get_colors( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_833_get_colors)
HXDLIN( 833)		return this1->buffer->ii->__get(this1->iiPos).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_colors,return )

::Array< Float > LineGradientStyleView_Impl__obj::get_alphas( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_840_get_alphas)
HXDLIN( 840)		return this1->buffer->ff->__get(this1->ffPos).StaticCast< ::Array< Float > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_alphas,return )

::Array< int > LineGradientStyleView_Impl__obj::get_ratios( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_847_get_ratios)
HXDLIN( 847)		return this1->buffer->ii->__get((this1->iiPos + 1)).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_ratios,return )

 ::openfl::geom::Matrix LineGradientStyleView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_854_get_matrix)
HXDLIN( 854)		return ( ( ::openfl::geom::Matrix)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_matrix,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_spreadMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_861_get_spreadMethod)
HXDLIN( 861)		return this1->buffer->o->__get((this1->oPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_spreadMethod,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_interpolationMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_868_get_interpolationMethod)
HXDLIN( 868)		return this1->buffer->o->__get((this1->oPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_interpolationMethod,return )

Float LineGradientStyleView_Impl__obj::get_focalPointRatio( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_875_get_focalPointRatio)
HXDLIN( 875)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_focalPointRatio,return )


LineGradientStyleView_Impl__obj::LineGradientStyleView_Impl__obj()
{
}

bool LineGradientStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colors") ) { outValue = get_colors_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alphas") ) { outValue = get_alphas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ratios") ) { outValue = get_ratios_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_spreadMethod") ) { outValue = get_spreadMethod_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_focalPointRatio") ) { outValue = get_focalPointRatio_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_interpolationMethod") ) { outValue = get_interpolationMethod_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *LineGradientStyleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineGradientStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class LineGradientStyleView_Impl__obj::__mClass;

static ::String LineGradientStyleView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_type",43,ae,c3,cc),
	HX_("get_colors",79,35,0e,b7),
	HX_("get_alphas",1e,3b,c3,32),
	HX_("get_ratios",d1,a4,11,ac),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("get_spreadMethod",3d,f2,c2,f1),
	HX_("get_interpolationMethod",bc,35,4a,d1),
	HX_("get_focalPointRatio",77,40,d5,4b),
	::String(null())
};

void LineGradientStyleView_Impl__obj::__register()
{
	LineGradientStyleView_Impl__obj _hx_dummy;
	LineGradientStyleView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_",2a,c6,21,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineGradientStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineGradientStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineGradientStyleView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineGradientStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineGradientStyleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
