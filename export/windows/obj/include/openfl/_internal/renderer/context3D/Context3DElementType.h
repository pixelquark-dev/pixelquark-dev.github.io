// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DElementType
#define INCLUDED_openfl__internal_renderer_context3D_Context3DElementType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DElementType)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class Context3DElementType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DElementType_obj OBJ_;

	public:
		Context3DElementType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl._internal.renderer.context3D.Context3DElementType",9f,fa,59,bb); }
		::String __ToString() const { return HX_("Context3DElementType.",38,30,f0,03) + _hx_tag; }

		static ::openfl::_internal::renderer::context3D::Context3DElementType QUADS;
		static inline ::openfl::_internal::renderer::context3D::Context3DElementType QUADS_dyn() { return QUADS; }
		static ::openfl::_internal::renderer::context3D::Context3DElementType TRIANGLES;
		static inline ::openfl::_internal::renderer::context3D::Context3DElementType TRIANGLES_dyn() { return TRIANGLES; }
		static ::openfl::_internal::renderer::context3D::Context3DElementType TRIANGLE_INDICES;
		static inline ::openfl::_internal::renderer::context3D::Context3DElementType TRIANGLE_INDICES_dyn() { return TRIANGLE_INDICES; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DElementType */ 
