#include "AppClass.h"
void Application::InitVariables(void)
{
	////Change this to your name and email
	m_sProgrammer = "Ron Dodge - rcd7972@rit.edu";

	////Alberto needed this at this position for software recording.
	//m_pWindow->setPosition(sf::Vector2i(710, 0));

	// --1-----1--
	// ---1---1---
	// --1111111--
	// -11-111-11-
	// 11111111111
	// 1-1111111-1
	// 1-1-----1-1
	// ---11-11---
	// P.S. my code is disgusting- I covered my mess in blankets don't hate me.

	#pragma region meshObjects
	m_pMesh = new MyMesh();
	m_pMesh->GenerateCube(1.0f, C_PURPLE);

	m_pMesh1 = new MyMesh();
	m_pMesh1->GenerateCube(1.0f, C_PURPLE);

	m_pMesh2 = new MyMesh();
	m_pMesh2->GenerateCube(1.0f, C_PURPLE);

	m_pMesh3 = new MyMesh();
	m_pMesh3->GenerateCube(1.0f, C_PURPLE);

	m_pMesh4 = new MyMesh();
	m_pMesh4->GenerateCube(1.0f, C_PURPLE);

	m_pMesh5 = new MyMesh();
	m_pMesh5->GenerateCube(1.0f, C_PURPLE);

	m_pMesh6 = new MyMesh();
	m_pMesh6->GenerateCube(1.0f, C_PURPLE);

	m_pMesh7 = new MyMesh();
	m_pMesh7->GenerateCube(1.0f, C_PURPLE);

	m_pMesh8 = new MyMesh();
	m_pMesh8->GenerateCube(1.0f, C_PURPLE);

	m_pMesh9 = new MyMesh();
	m_pMesh9->GenerateCube(1.0f, C_PURPLE);

	m_pMesh10 = new MyMesh();
	m_pMesh10->GenerateCube(1.0f, C_PURPLE);

	m_pMesh11 = new MyMesh();
	m_pMesh11->GenerateCube(1.0f, C_PURPLE);

	m_pMesh12 = new MyMesh();
	m_pMesh12->GenerateCube(1.0f, C_PURPLE);

	m_pMesh13 = new MyMesh();
	m_pMesh13->GenerateCube(1.0f, C_PURPLE);

	m_pMesh14 = new MyMesh();
	m_pMesh14->GenerateCube(1.0f, C_PURPLE);

	m_pMesh15 = new MyMesh();
	m_pMesh15->GenerateCube(1.0f, C_PURPLE);

	m_pMesh16 = new MyMesh();
	m_pMesh16->GenerateCube(1.0f, C_PURPLE);

	m_pMesh17 = new MyMesh();
	m_pMesh17->GenerateCube(1.0f, C_PURPLE);

	m_pMesh18 = new MyMesh();
	m_pMesh18->GenerateCube(1.0f, C_PURPLE);

	m_pMesh19 = new MyMesh();
	m_pMesh19->GenerateCube(1.0f, C_PURPLE);

	m_pMesh20 = new MyMesh();
	m_pMesh20->GenerateCube(1.0f, C_PURPLE);

	m_pMesh21 = new MyMesh();
	m_pMesh21->GenerateCube(1.0f, C_PURPLE);

	m_pMesh22 = new MyMesh();
	m_pMesh22->GenerateCube(1.0f, C_PURPLE);

	m_pMesh23 = new MyMesh();
	m_pMesh23->GenerateCube(1.0f, C_PURPLE);

	m_pMesh24 = new MyMesh();
	m_pMesh24->GenerateCube(1.0f, C_PURPLE);

	m_pMesh25 = new MyMesh();
	m_pMesh25->GenerateCube(1.0f, C_PURPLE);

	m_pMesh26 = new MyMesh();
	m_pMesh26->GenerateCube(1.0f, C_PURPLE);

	m_pMesh27 = new MyMesh();
	m_pMesh27->GenerateCube(1.0f, C_PURPLE);

	m_pMesh28 = new MyMesh();
	m_pMesh28->GenerateCube(1.0f, C_PURPLE);

	m_pMesh29 = new MyMesh();
	m_pMesh29->GenerateCube(1.0f, C_PURPLE);

	m_pMesh30 = new MyMesh();
	m_pMesh30->GenerateCube(1.0f, C_PURPLE);

	m_pMesh31 = new MyMesh();
	m_pMesh31->GenerateCube(1.0f, C_PURPLE);

	m_pMesh32 = new MyMesh();
	m_pMesh32->GenerateCube(1.0f, C_PURPLE);

	m_pMesh33 = new MyMesh();
	m_pMesh33->GenerateCube(1.0f, C_PURPLE);

	m_pMesh34 = new MyMesh();
	m_pMesh34->GenerateCube(1.0f, C_PURPLE);

	m_pMesh35 = new MyMesh();
	m_pMesh35->GenerateCube(1.0f, C_PURPLE);

	m_pMesh36 = new MyMesh();
	m_pMesh36->GenerateCube(1.0f, C_PURPLE);

	m_pMesh37 = new MyMesh();
	m_pMesh37->GenerateCube(1.0f, C_PURPLE);

	m_pMesh38 = new MyMesh();
	m_pMesh38->GenerateCube(1.0f, C_PURPLE);

	m_pMesh39 = new MyMesh();
	m_pMesh39->GenerateCube(1.0f, C_PURPLE);

	m_pMesh40 = new MyMesh();
	m_pMesh40->GenerateCube(1.0f, C_PURPLE);

	m_pMesh41 = new MyMesh();
	m_pMesh41->GenerateCube(1.0f, C_PURPLE);

	m_pMesh42 = new MyMesh();
	m_pMesh42->GenerateCube(1.0f, C_PURPLE);

	m_pMesh43 = new MyMesh();
	m_pMesh43->GenerateCube(1.0f, C_PURPLE);

	m_pMesh44 = new MyMesh();
	m_pMesh44->GenerateCube(1.0f, C_PURPLE);

	m_pMesh45 = new MyMesh();
	m_pMesh45->GenerateCube(1.0f, C_PURPLE);
#pragma endregion Make squares

}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();



	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	#pragma region renderObj	
	
	static float value = 0.0f;

	m_pMesh->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value, 0.0f, 0.0f)));
	m_pMesh2->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value, 2.0f, 0.0f)));
	m_pMesh1->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value, 1.0f, 0.0f)));
	m_pMesh3->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value, 3.0f, 0.0f)));
	m_pMesh4->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 1.0f, 0.0f, 0.0f)));
	m_pMesh5->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 2.0f, 0.0f, 0.0f)));
	m_pMesh6->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, 0.0f, 0.0f)));
	m_pMesh7->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 1.0f, 0.0f, 0.0f)));
	m_pMesh8->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 2.0f, 0.0f, 0.0f)));
	m_pMesh9->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, 0.0f, 0.0f)));
	m_pMesh10->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 5.0f, 0.0f, 0.0f)));
	m_pMesh11->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 5.0f, 0.0f, 0.0f)));
	m_pMesh12->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, -1.0f, 0.0f)));
	m_pMesh13->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 5.0f, -1.0f, 0.0f)));
	m_pMesh14->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, -1.0f, 0.0f)));
	m_pMesh15->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 5.0f, -1.0f, 0.0f)));
	m_pMesh16->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 1.0f, -2.0f, 0.0f)));
	m_pMesh17->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 2.0f, -2.0f, 0.0f)));
	m_pMesh18->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 1.0f, -2.0f, 0.0f)));
	m_pMesh19->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 2.0f, -2.0f, 0.0f)));
	m_pMesh20->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 1.0f, 1.0f, 0.0f)));
	m_pMesh21->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 2.0f, 1.0f, 0.0f)));
	m_pMesh22->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, 1.0f, 0.0f)));
	m_pMesh23->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 4.0f, 1.0f, 0.0f)));
	m_pMesh24->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 5.0f, 1.0f, 0.0f)));
	m_pMesh25->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 1.0f, 1.0f, 0.0f)));
	m_pMesh26->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 2.0f, 1.0f, 0.0f)));
	m_pMesh27->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, 1.0f, 0.0f)));
	m_pMesh28->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 4.0f, 1.0f, 0.0f)));
	m_pMesh29->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 5.0f, 1.0f, 0.0f)));
	m_pMesh30->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 1.0f, 2.0f, 0.0f)));
	m_pMesh31->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, 2.0f, 0.0f)));
	m_pMesh32->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 4.0f, 2.0f, 0.0f)));
	m_pMesh33->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 1.0f, 2.0f, 0.0f)));
	m_pMesh34->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, 2.0f, 0.0f)));
	m_pMesh35->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 4.0f, 2.0f, 0.0f)));
	m_pMesh36->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 1.0f, 3.0f, 0.0f)));
	m_pMesh37->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 2.0f, 3.0f, 0.0f)));
	m_pMesh38->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, 3.0f, 0.0f)));
	m_pMesh39->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 1.0f, 3.0f, 0.0f)));
	m_pMesh40->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 2.0f, 3.0f, 0.0f)));
	m_pMesh41->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, 3.0f, 0.0f)));
	m_pMesh42->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 2.0f, 4.0f, 0.0f)));
	m_pMesh43->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 2.0f, 4.0f, 0.0f)));
	m_pMesh44->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value + 3.0f, 5.0f, 0.0f)));
	m_pMesh45->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(IDENTITY_M4, vector3(value - 3.0f, 5.0f, 0.0f)));
	
	value += 0.01f;

#pragma endregion Rendering and moving all the squares

	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	if (m_pMesh != nullptr)
	{
		delete m_pMesh;
		m_pMesh = nullptr;
	}
	SafeDelete(m_pMesh1);
	//release GUI
	ShutdownGUI();
}