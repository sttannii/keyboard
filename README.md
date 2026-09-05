# Virtual Keyboard GUI Application

A cross-platform GUI application developed in C++ using the JUCE framework.

The project was created as part of a technological (design and technological) internship and demonstrates the development of an interactive virtual keyboard with text input and editing functionality.

## About the Project

The application provides a graphical virtual keyboard that allows the user to enter and edit text using on-screen buttons.

The interface was designed based on a prototype created in Figma. The application uses custom GUI components and manually rendered interface elements to reproduce the visual design of the prototype.

The project demonstrates practical experience with:

- C++ application development
- JUCE framework
- GUI design and implementation
- Event handling
- Custom UI components
- Dynamic component positioning
- File operations
- Code documentation with Doxygen
- Debugging and testing

## Features

- Virtual keyboard with letter buttons
- Text input and editing
- Caps Lock functionality
- Enter key
- Delete key
- Space and punctuation buttons
- Save text to a file
- Save button state management
- Hover and pressed button states
- Custom button appearance
- Image-based buttons
- Dynamic interface resizing

## Technologies

- **C++**
- **JUCE**
- **Visual Studio**
- **Figma**
- **Doxygen**

## JUCE Components

The application uses several JUCE components:

| Component | JUCE Class | Purpose |
|---|---|---|
| Text editor | `juce::TextEditor` | Text input and editing |
| Text buttons | `juce::TextButton` | Virtual keyboard keys |
| Image buttons | `juce::ImageButton` | Save, Enter, Caps Lock and other icon-based controls |
| Graphics | `juce::Graphics` | Custom interface rendering |

Custom classes were also created:

- `MyButton` — custom text button derived from `TextButton`
- `MyImageButton` — custom image button derived from `ImageButton`
- `MainComponent` — main application component
- `MainFrame` — main application window
- `PracticeApplication` — application entry point

## Interface

The application interface consists of:

- a text input field;
- a virtual keyboard;
- control buttons;
- a save button;
- custom visual states for buttons.

The main component has a minimum size of **750 × 340 pixels** and supports dynamic resizing.

The positions and sizes of interface elements are calculated relative to the current window dimensions, allowing the keyboard layout to adapt when the window is resized.

## Event Handling

User interaction is implemented using JUCE's event listener mechanisms.

The `buttonClicked()` method processes keyboard button events and performs corresponding actions.

For example:

- letter buttons add characters to the text field;
- `Caps Lock` changes the case of the keyboard letters;
- `Enter` inserts a new line;
- `Delete` removes a character;
- `Save` writes the entered text to a file.

## Text Saving

The application can save the entered text to a file named:

```text
saveViKey.txt
