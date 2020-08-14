#include "gepch.h"

#include "Application.h"
#include "Events/Event.h"
#include "GameEngine/Events/ApplicationEvent.h"

#include <GLFW/glfw3.h>

namespace GameEngine {
	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}
	Application::~Application() {}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		GE_TRACE(e);

		while (m_Running) {
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}