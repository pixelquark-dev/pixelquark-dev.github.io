// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DMaskShader
#include <openfl/_internal/renderer/context3D/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3440d0cc724aabd0_47_new,"openfl._internal.renderer.context3D.Context3DMaskShader","new",0x5eeea73a,"openfl._internal.renderer.context3D.Context3DMaskShader.new","openfl/_internal/renderer/context3D/Context3DMaskShader.hx",47,0x8937deb6)
HX_LOCAL_STACK_FRAME(_hx_pos_3440d0cc724aabd0_12_boot,"openfl._internal.renderer.context3D.Context3DMaskShader","boot",0xa9fcac18,"openfl._internal.renderer.context3D.Context3DMaskShader.boot","openfl/_internal/renderer/context3D/Context3DMaskShader.hx",12,0x8937deb6)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DMaskShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3440d0cc724aabd0_47_new)
HXLINE( 182)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("varying vec2 openfl_TextureCoordv;\n\t\t\n\t\tuniform sampler2D openfl_Texture;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 color = texture2D (openfl_Texture, openfl_TextureCoordv);\n\t\t\t\n\t\t\tif (color.a == 0.0) {\n\t\t\t\t\n\t\t\t\tdiscard;\n\t\t\t\t\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\tgl_FragColor = color;\n\t\t\t\t\n\t\t\t}\n\t\t\t\n\t\t}",2e,28,fd,de);
            		}
HXLINE( 174)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\t\n\t\tuniform mat4 openfl_Matrix;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\t\t\t\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t\t\t\n\t\t}",00,5c,9a,ee);
            		}
HXLINE(  48)		super::__construct(null());
HXLINE(  10)		this->_hx___isGenerated = true;
HXDLIN(  10)		this->_hx___initGL();
            	}

Dynamic Context3DMaskShader_obj::__CreateEmpty() { return new Context3DMaskShader_obj; }

void *Context3DMaskShader_obj::_hx_vtable = 0;

Dynamic Context3DMaskShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DMaskShader_obj > _hx_result = new Context3DMaskShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DMaskShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x46a73280) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x46a73280;
	} else {
		return inClassId==(int)0x676ab1f7;
	}
}

 ::openfl::display::BitmapData Context3DMaskShader_obj::opaqueBitmapData;


hx::ObjectPtr< Context3DMaskShader_obj > Context3DMaskShader_obj::__new() {
	hx::ObjectPtr< Context3DMaskShader_obj > __this = new Context3DMaskShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Context3DMaskShader_obj > Context3DMaskShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Context3DMaskShader_obj *__this = (Context3DMaskShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DMaskShader_obj), true, "openfl._internal.renderer.context3D.Context3DMaskShader"));
	*(void **)__this = Context3DMaskShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Context3DMaskShader_obj::Context3DMaskShader_obj()
{
}

void Context3DMaskShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DMaskShader);
	HX_MARK_MEMBER_NAME(openfl_Position,"openfl_Position");
	HX_MARK_MEMBER_NAME(openfl_TextureCoord,"openfl_TextureCoord");
	HX_MARK_MEMBER_NAME(openfl_Matrix,"openfl_Matrix");
	HX_MARK_MEMBER_NAME(openfl_Texture,"openfl_Texture");
	 ::openfl::display::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Context3DMaskShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(openfl_Position,"openfl_Position");
	HX_VISIT_MEMBER_NAME(openfl_TextureCoord,"openfl_TextureCoord");
	HX_VISIT_MEMBER_NAME(openfl_Matrix,"openfl_Matrix");
	HX_VISIT_MEMBER_NAME(openfl_Texture,"openfl_Texture");
	 ::openfl::display::Shader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Context3DMaskShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"openfl_Matrix") ) { return hx::Val( openfl_Matrix ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"openfl_Texture") ) { return hx::Val( openfl_Texture ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openfl_Position") ) { return hx::Val( openfl_Position ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"openfl_TextureCoord") ) { return hx::Val( openfl_TextureCoord ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3DMaskShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBitmapData") ) { outValue = ( opaqueBitmapData ); return true; }
	}
	return false;
}

hx::Val Context3DMaskShader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"openfl_Matrix") ) { openfl_Matrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"openfl_Texture") ) { openfl_Texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openfl_Position") ) { openfl_Position=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"openfl_TextureCoord") ) { openfl_TextureCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3DMaskShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBitmapData") ) { opaqueBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
	}
	return false;
}

void Context3DMaskShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("openfl_Position",98,fe,6c,ee));
	outFields->push(HX_("openfl_TextureCoord",49,e9,27,e8));
	outFields->push(HX_("openfl_Matrix",70,ea,41,06));
	outFields->push(HX_("openfl_Texture",cc,bd,e4,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Context3DMaskShader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Context3DMaskShader_obj,openfl_Position),HX_("openfl_Position",98,fe,6c,ee)},
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Context3DMaskShader_obj,openfl_TextureCoord),HX_("openfl_TextureCoord",49,e9,27,e8)},
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Context3DMaskShader_obj,openfl_Matrix),HX_("openfl_Matrix",70,ea,41,06)},
	{hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Context3DMaskShader_obj,openfl_Texture),HX_("openfl_Texture",cc,bd,e4,7e)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Context3DMaskShader_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DMaskShader_obj::opaqueBitmapData,HX_("opaqueBitmapData",fa,d9,4a,28)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Context3DMaskShader_obj_sMemberFields[] = {
	HX_("openfl_Position",98,fe,6c,ee),
	HX_("openfl_TextureCoord",49,e9,27,e8),
	HX_("openfl_Matrix",70,ea,41,06),
	HX_("openfl_Texture",cc,bd,e4,7e),
	::String(null()) };

static void Context3DMaskShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMaskShader_obj::opaqueBitmapData,"opaqueBitmapData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DMaskShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMaskShader_obj::opaqueBitmapData,"opaqueBitmapData");
};

#endif

hx::Class Context3DMaskShader_obj::__mClass;

static ::String Context3DMaskShader_obj_sStaticFields[] = {
	HX_("opaqueBitmapData",fa,d9,4a,28),
	::String(null())
};

void Context3DMaskShader_obj::__register()
{
	Context3DMaskShader_obj _hx_dummy;
	Context3DMaskShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.context3D.Context3DMaskShader",48,42,10,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DMaskShader_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DMaskShader_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DMaskShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DMaskShader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Context3DMaskShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DMaskShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DMaskShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DMaskShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DMaskShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DMaskShader_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3440d0cc724aabd0_12_boot)
HXDLIN(  12)		opaqueBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
