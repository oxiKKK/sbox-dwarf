
//
// public/materialsystem2/ifontsurface.h
//
//	referenced by: libmaterialsystem2.so
//
//	struct: 1
//

// <005D45F9> ../public/materialsystem2/ifontsurface.h:59
// member functions: 3
// member variables: 2
// struct size: 16
struct FontVertex_t {
	/* ../public/materialsystem2/ifontsurface.h:61 */
	void FontVertex_t(FontVertex_t* );
	/* ../public/materialsystem2/ifontsurface.h:62 */
	void FontVertex_t(FontVertex_t* , const Vector2D& , const Vector2D& );
	/* ../public/materialsystem2/ifontsurface.h:67 */
	void Init(FontVertex_t* , const Vector2D& , const Vector2D& );
	Vector2D m_Position; /* 0 8 */
	Vector2D m_TexCoord; /* 8 8 */
};

