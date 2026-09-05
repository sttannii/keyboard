#pragma once
//
#include &quot;../JuceLibraryCode/JuceHeader.h&quot;
/**
* @class MyButton
* @brief Класс для создания пользовательской текстовой кнопки, унаследованной от класса TextButton.
*/
class MyButton : public TextButton
{
public:
/**
* @brief Конструктор кнопки.
* @param name Название кнопки.
*/
MyButton(String name);
/**
* @brief Деструктор.
*/
~MyButton(void) override;
/**
* @brief Метод отрисовки кнопки.
*/
void paint(Graphics&amp;) override;
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MyButton)
};
/**
* @class MyImageButton
* @brief Класс для создания пользовательской кнопки с изображением, унаследованной от класса
ImageButton.
*/
class MyImageButton : public ImageButton
{
public:
/**
* @brief Конструктор кнопки с изображением.
* @param name Название кнопки.
*/
MyImageButton(String name);
/**
* @brief Деструктор.
*/
~MyImageButton(void) override;
/* @brief Метод установки изображения для недоступного состояния кнопки
* @param image Изображение для недоступного состояния кнопки
*/
void setDisabledImage(const Image&amp; image)
{
disabledImage = image;
}
/*
* @brief Метод для возвращения изображение, установленное для недоступного состояния.
*/
const Image&amp; getDisabledImage()
{
return disabledImage;
}
/**
* @brief Метод отрисовки кнопки с учетом наведения и нажатия.
* @param isMouseOverButton Флаг, указывающий, находится ли курсор над кнопкой.
* @param isButtonDown Флаг, указывающий, нажата ли кнопка.
*/
void paintButton(Graphics&amp;, bool isMouseOverButton, bool isButtonDown) override;
private:
Image disabledImage;
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MyImageButton)
};
/**
* @class MainComponent
* @brief Главный компонент приложения, содержащий интерфейс виртуальной клавиатуры.
* Реализует интерфейсы слушателей кнопок и текстового редактора.
*/
class MainComponent : public Component, public Button::Listener, public juce::TextEditor::Listener
{
public:
/**
* @brief Конструктор главного компонента.
*/
MainComponent(void);
/**
* @brief Деструктор.
*/
~MainComponent(void) override;
/**
* @brief Метод отрисовки фона компонента.
*/
void paint(Graphics&amp;) override;
/**
* @brief Метод для расположения всех кнопок и элементов интерфейса.
*/
void resized(void) override;
/**
* @brief Метод для блокировки кнопки &quot;Сохранить&quot;, если поле для ввода текста пустое.
*/
void textEditorTextChanged(TextEditor&amp;) override;
/*
* isCapsLock Флаг, указывающий нажата ли кнопка Caps
*/
bool isCapsLock = false;
/*
* Метод, обновляющий текст на текстовых кнопках
*/
void updateButtonTexts();
String savedText;
bool isTextSaved = false;
/*
* @brief Метод обработки нажатия кнопки.
* @param button Указатель на нажатую кнопку.
*/
void buttonClicked(Button* button) override;
private:
MyButton QButton, WButton, EButton, RButton, TButton, YButton, UButton, IButton, OButton, PButton;
TextEditor FEditor;
MyImageButton SaveButton, LanguageButton, CapsButton, DelButton, EnterButton;
MyButton AButton, SButton, DButton, FButton, GButton, HButton, JButton, KButton, LButton;
MyButton ZButton, XButton, CButton, VButton, BButton, NButton, MButton;
MyButton SpaceButton, PointButton, CommaButton, NumButton;
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};
