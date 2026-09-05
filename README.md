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
saveViKey.txt

The Save button is disabled when the text field is empty.

After the text is saved, the button becomes disabled until the text is changed again.

Custom UI

The standard JUCE button appearance was replaced with custom rendering.

MyButton implements custom drawing for:

background;
text;
rounded corners;
hover state;
pressed state.

MyImageButton provides custom rendering for image-based buttons and handles the disabled state of the Save button.

Documentation

Parts of the source code are documented using the Doxygen documentation style.

Documentation comments describe classes, constructors, methods and their parameters.

Example:

/**
 * @class MainComponent
 * @brief Main application component containing the virtual keyboard interface.
 */
Project Structure

The Visual Studio project is organized into the following main directories:

Project/
├── Source/
│   ├── MainComponent.cpp
│   └── MainFrame.cpp
│
├── Include/
│   ├── MainComponent.h
│   ├── MainFrame.h
│   └── Application.h
│
├── JuceLibraryCode/
│   └── JUCE library files and modules
│
└── Builds/
    └── Visual Studio project files

Image resources used by the interface are also included in the project.

Development Challenges

During development, several technical issues were addressed.

ImageButton states

The standard ImageButton mouse-over and mouse-down states did not provide the required visual behavior.

The problem was addressed by overriding the paintButton() method and implementing custom rendering for different button states.

Dynamic positioning

The keyboard elements had to maintain their relative positions when the application window was resized.

The resized() method was used to calculate the positions and dimensions of components dynamically.

Results

The project resulted in a functional GUI virtual keyboard application.

During development, the following skills were practiced:

designing GUI applications;
working with the JUCE framework;
creating custom interface components;
processing user events;
working with images;
implementing dynamic layouts;
saving data to files;
documenting source code;
debugging GUI applications.
Future Improvements

Possible future improvements include:

implementing complete Russian/English keyboard switching;
adding dynamic switching between numeric and symbol layouts;
extending the application to support fullscreen virtual keyboard mode;
adapting the interface for touch devices.

Author
Татьяна Спиридонова
