#pragma once


#ifndef __MYRIGIDBODY_H_
#define __MYRIGIDBODY_H_

#include "MyMesh.h"
#include "MyCamera.h"
#include "Definitions.h"

namespace Simplex {

	class MyRigidBody {
	private:
		vector3 v3Min;
		vector3 v3Max;
		vector3 v3Center;
		float fRadius;
	public:
		Mesh* m_pBS;
		Mesh* m_pBB;
		MyRigidBody(MyMesh* a_pMesh);
		void Render(MyCamera* a_pCamera, matrix4 a_m4Transform);
	};
}

#endif //__MYRIGIDBODY_H_