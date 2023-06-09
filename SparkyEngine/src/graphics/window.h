#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "font_manager.h"
#include "../audio/sound_manager.h"
#include "texture_manager.h"
#include "../maths/vec2.h"

namespace sparky { namespace graphics {

#define MAX_KEYS 1024
#define MAX_BUTTONS 32

    class Window
    {
    private: 
        const char *m_Title;
        GLFWwindow* m_Window;
        bool m_Closed();
        int m_Width;
        int m_Height;


        bool m_Keys[MAX_KEYS];
        bool m_MouseButtons[MAX_BUTTONS];
        bool m_KeyState[MAX_KEYS];
        bool m_KeyTyped[MAX_KEYS];
        bool m_MouseState[MAX_BUTTONS];
        bool m_MouseClicked[MAX_BUTTONS];

        maths::vec2 m_MousePosition;
        
    public:
        Window(const char* title, int width, int height);
        ~Window();
        void clear() const;
        void update();
        void updateInput();
        bool closed() const;

        inline const int getWidth() { return m_Width; } //960
        inline const int getHeight() { return m_Height; } //540

        bool isKeyPressed(unsigned int keycode) const;
        bool isKeyTyped(unsigned int keycode) const;
        bool isMouseButtonPressed(unsigned int button) const;
        bool isMouseButtonClicked(unsigned int button) const;
        const maths::vec2& getMousePosition() const;
    private:
        bool init();
        friend void window_resize(GLFWwindow* window, int width, int height);
        friend void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
        friend void mouse_button_callback(GLFWwindow* window, int button, int action, int mods); 
        friend void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);
    };
} } 