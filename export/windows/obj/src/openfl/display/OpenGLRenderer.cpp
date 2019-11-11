// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2f59d7e567bca573_32_new,"openfl.display.OpenGLRenderer","new",0x318619ae,"openfl.display.OpenGLRenderer.new","openfl/display/OpenGLRenderer.hx",32,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_38_applyAlpha,"openfl.display.OpenGLRenderer","applyAlpha",0xd5dfbf82,"openfl.display.OpenGLRenderer.applyAlpha","openfl/display/OpenGLRenderer.hx",38,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_44_applyBitmapData,"openfl.display.OpenGLRenderer","applyBitmapData",0x4c599b15,"openfl.display.OpenGLRenderer.applyBitmapData","openfl/display/OpenGLRenderer.hx",44,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_50_applyColorTransform,"openfl.display.OpenGLRenderer","applyColorTransform",0xad8c9ae5,"openfl.display.OpenGLRenderer.applyColorTransform","openfl/display/OpenGLRenderer.hx",50,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_56_applyHasColorTransform,"openfl.display.OpenGLRenderer","applyHasColorTransform",0x4989d2a7,"openfl.display.OpenGLRenderer.applyHasColorTransform","openfl/display/OpenGLRenderer.hx",56,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_61_applyMatrix,"openfl.display.OpenGLRenderer","applyMatrix",0xc7743d9d,"openfl.display.OpenGLRenderer.applyMatrix","openfl/display/OpenGLRenderer.hx",61,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_70_getMatrix,"openfl.display.OpenGLRenderer","getMatrix",0xa537f745,"openfl.display.OpenGLRenderer.getMatrix","openfl/display/OpenGLRenderer.hx",70,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_77_setShader,"openfl.display.OpenGLRenderer","setShader",0xe9e16c35,"openfl.display.OpenGLRenderer.setShader","openfl/display/OpenGLRenderer.hx",77,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_82_setViewport,"openfl.display.OpenGLRenderer","setViewport",0x9cb75d76,"openfl.display.OpenGLRenderer.setViewport","openfl/display/OpenGLRenderer.hx",82,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_89_updateShader,"openfl.display.OpenGLRenderer","updateShader",0x08518300,"openfl.display.OpenGLRenderer.updateShader","openfl/display/OpenGLRenderer.hx",89,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_95_useAlphaArray,"openfl.display.OpenGLRenderer","useAlphaArray",0x92a9e750,"openfl.display.OpenGLRenderer.useAlphaArray","openfl/display/OpenGLRenderer.hx",95,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_101_useColorTransformArray,"openfl.display.OpenGLRenderer","useColorTransformArray",0xf01908bb,"openfl.display.OpenGLRenderer.useColorTransformArray","openfl/display/OpenGLRenderer.hx",101,0x89bd8a40)
HX_LOCAL_STACK_FRAME(_hx_pos_2f59d7e567bca573_23_boot,"openfl.display.OpenGLRenderer","boot",0x1be95f24,"openfl.display.OpenGLRenderer.boot","openfl/display/OpenGLRenderer.hx",23,0x89bd8a40)
namespace openfl{
namespace display{

void OpenGLRenderer_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_32_new)
HXDLIN(  32)		super::__construct();
            	}

Dynamic OpenGLRenderer_obj::__CreateEmpty() { return new OpenGLRenderer_obj; }

void *OpenGLRenderer_obj::_hx_vtable = 0;

Dynamic OpenGLRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OpenGLRenderer_obj > _hx_result = new OpenGLRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OpenGLRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x38ea65a4) {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x38ea65a4;
		}
	} else {
		return inClassId==(int)0x7cdf41d6;
	}
}

void OpenGLRenderer_obj::applyAlpha(Float alpha){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_38_applyAlpha)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,applyAlpha,(void))

void OpenGLRenderer_obj::applyBitmapData( ::openfl::display::BitmapData bitmapData,bool smooth,hx::Null< bool >  __o_repeat){
            		bool repeat = __o_repeat.Default(false);
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_44_applyBitmapData)
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenGLRenderer_obj,applyBitmapData,(void))

void OpenGLRenderer_obj::applyColorTransform( ::openfl::geom::ColorTransform colorTransform){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_50_applyColorTransform)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,applyColorTransform,(void))

void OpenGLRenderer_obj::applyHasColorTransform(bool enabled){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_56_applyHasColorTransform)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,applyHasColorTransform,(void))

void OpenGLRenderer_obj::applyMatrix(::Array< Float > matrix){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_61_applyMatrix)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,applyMatrix,(void))

 ::lime::utils::ArrayBufferView OpenGLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_70_getMatrix)
HXDLIN(  70)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,getMatrix,return )

void OpenGLRenderer_obj::setShader( ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_77_setShader)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderer_obj,setShader,(void))

void OpenGLRenderer_obj::setViewport(){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_82_setViewport)
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenGLRenderer_obj,setViewport,(void))

void OpenGLRenderer_obj::updateShader(){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_89_updateShader)
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenGLRenderer_obj,updateShader,(void))

void OpenGLRenderer_obj::useAlphaArray(){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_95_useAlphaArray)
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenGLRenderer_obj,useAlphaArray,(void))

void OpenGLRenderer_obj::useColorTransformArray(){
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_101_useColorTransformArray)
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenGLRenderer_obj,useColorTransformArray,(void))


hx::ObjectPtr< OpenGLRenderer_obj > OpenGLRenderer_obj::__new( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget) {
	hx::ObjectPtr< OpenGLRenderer_obj > __this = new OpenGLRenderer_obj();
	__this->__construct(context,defaultRenderTarget);
	return __this;
}

hx::ObjectPtr< OpenGLRenderer_obj > OpenGLRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::display::BitmapData defaultRenderTarget) {
	OpenGLRenderer_obj *__this = (OpenGLRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OpenGLRenderer_obj), true, "openfl.display.OpenGLRenderer"));
	*(void **)__this = OpenGLRenderer_obj::_hx_vtable;
	__this->__construct(context,defaultRenderTarget);
	return __this;
}

OpenGLRenderer_obj::OpenGLRenderer_obj()
{
}

void OpenGLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenGLRenderer);
	HX_MARK_MEMBER_NAME(gl,"gl");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OpenGLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val OpenGLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return hx::Val( getMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"setShader") ) { return hx::Val( setShader_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyAlpha") ) { return hx::Val( applyAlpha_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyMatrix") ) { return hx::Val( applyMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return hx::Val( setViewport_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateShader") ) { return hx::Val( updateShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useAlphaArray") ) { return hx::Val( useAlphaArray_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyBitmapData") ) { return hx::Val( applyBitmapData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyColorTransform") ) { return hx::Val( applyColorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"applyHasColorTransform") ) { return hx::Val( applyHasColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"useColorTransformArray") ) { return hx::Val( useColorTransformArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OpenGLRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenGLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gl",25,5a,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo OpenGLRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::lime::_internal::backend::native::NativeOpenGLRenderContext */ ,(int)offsetof(OpenGLRenderer_obj,gl),HX_("gl",25,5a,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OpenGLRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String OpenGLRenderer_obj_sMemberFields[] = {
	HX_("gl",25,5a,00,00),
	HX_("applyAlpha",10,23,e8,cc),
	HX_("applyBitmapData",c7,94,b7,f3),
	HX_("applyColorTransform",97,55,2e,0b),
	HX_("applyHasColorTransform",35,53,e0,cd),
	HX_("applyMatrix",4f,f6,c2,f7),
	HX_("getMatrix",77,bf,1e,38),
	HX_("setShader",67,34,c8,7c),
	HX_("setViewport",28,16,06,cd),
	HX_("updateShader",0e,66,e4,1c),
	HX_("useAlphaArray",82,b0,9d,7e),
	HX_("useColorTransformArray",49,89,6f,74),
	::String(null()) };

hx::Class OpenGLRenderer_obj::__mClass;

void OpenGLRenderer_obj::__register()
{
	OpenGLRenderer_obj _hx_dummy;
	OpenGLRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.OpenGLRenderer",bc,6a,f8,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OpenGLRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OpenGLRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenGLRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenGLRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OpenGLRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2f59d7e567bca573_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))));
            	}
}

} // end namespace openfl
} // end namespace display
