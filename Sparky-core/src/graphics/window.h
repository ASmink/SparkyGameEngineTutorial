#pragma once

#include <iostream>
#include <GLFW\glfw3.h>

namespace sparky{
	namespace graphics {
		class Window
		{
		// Private Variable
		private:
			const char *m_Title;
			int m_Width, m_Height;
			GLFWwindow *m_Window;

			bool m_Closed;
		
		// Public Methods
		public:
			// Class Constructor
			Window(const char *title, int width, int height);

			// Class Destructor
			~Window();

			// Methods			
			void clear() const;
			void update();
			bool closed() const;

			// Getters
			inline int getWidth() const { return m_Width; };
			inline int getHeight() const { return m_Height; };

		// Private Methods
		private:
			bool init();
		};
	}
}