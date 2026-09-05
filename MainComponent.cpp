#include &quot;../Include/MainComponent.h&quot;
MainComponent::MainComponent(void)
: SaveButton(MyImageButton(String(&quot;save&quot;))), FEditor(TextEditor(String())), QButton(MyButton(String(&quot;q&quot;))),
WButton(MyButton(String(&quot;w&quot;))),
EButton(MyButton(String(&quot;e&quot;))), RButton(MyButton(String(&quot;r&quot;))), TButton(MyButton(String(&quot;t&quot;))),
YButton(MyButton(String(&quot;y&quot;))),
UButton(MyButton(String(&quot;u&quot;))), IButton(MyButton(String(&quot;i&quot;))), OButton(MyButton(String(&quot;o&quot;))),
PButton(MyButton(String(&quot;p&quot;))),
LanguageButton(MyImageButton(String(&quot;language&quot;))), AButton(MyButton(String(&quot;a&quot;))),
SButton(MyButton(String(&quot;s&quot;))), DButton(MyButton(String(&quot;d&quot;))),
FButton(MyButton(String(&quot;f&quot;))), GButton(MyButton(String(&quot;g&quot;))), HButton(MyButton(String(&quot;h&quot;))),
JButton(MyButton(String(&quot;j&quot;))),
KButton(MyButton(String(&quot;k&quot;))), LButton(MyButton(String(&quot;l&quot;))),
CapsButton(MyImageButton(String(&quot;caps&quot;))), EnterButton(MyImageButton(String(&quot;enter&quot;))),
DelButton(MyImageButton(String(&quot;del&quot;))), PointButton(MyButton(String(&quot;.&quot;))),
CommaButton(MyButton(String(&quot;,&quot;))), ZButton(MyButton(String(&quot;z&quot;))),
XButton(MyButton(String(&quot;x&quot;))), CButton(MyButton(String(&quot;c&quot;))), VButton(MyButton(String(&quot;v&quot;))),
BButton(MyButton(String(&quot;b&quot;))),
NButton(MyButton(String(&quot;n&quot;))), MButton(MyButton(String(&quot;m&quot;))), SpaceButton(MyButton(String(&quot; &quot;))),
NumButton(MyButton(String(&quot;?123&quot;)))
{
setOpaque(true);
setSize(750,340);
addAndMakeVisible(SaveButton);
SaveButton.addListener(this);
SaveButton.setEnabled(false);
addAndMakeVisible(FEditor);
FEditor.addListener(this);
addAndMakeVisible(QButton);
QButton.addListener(this);
addAndMakeVisible(WButton);
WButton.addListener(this);
addAndMakeVisible(EButton);
EButton.addListener(this);
addAndMakeVisible(RButton);
RButton.addListener(this);
addAndMakeVisible(TButton);
TButton.addListener(this);
addAndMakeVisible(YButton);
YButton.addListener(this);
addAndMakeVisible(UButton);
UButton.addListener(this);
addAndMakeVisible(IButton);
IButton.addListener(this);
addAndMakeVisible(OButton);
OButton.addListener(this);
addAndMakeVisible(PButton);
PButton.addListener(this);
addAndMakeVisible(LanguageButton);
LanguageButton.addListener(this);
addAndMakeVisible(AButton);
AButton.addListener(this);
addAndMakeVisible(SButton);
SButton.addListener(this);
addAndMakeVisible(DButton);
DButton.addListener(this);
addAndMakeVisible(FButton);
FButton.addListener(this);
addAndMakeVisible(GButton);
GButton.addListener(this);
addAndMakeVisible(HButton);
HButton.addListener(this);
addAndMakeVisible(JButton);
JButton.addListener(this);
addAndMakeVisible(KButton);
KButton.addListener(this);
addAndMakeVisible(LButton);
LButton.addListener(this);
addAndMakeVisible(CapsButton);
CapsButton.addListener(this);
addAndMakeVisible(PointButton);
PointButton.addListener(this);
addAndMakeVisible(CommaButton);
CommaButton.addListener(this);
addAndMakeVisible(SpaceButton);
SpaceButton.addListener(this);
addAndMakeVisible(EnterButton);
EnterButton.addListener(this);
addAndMakeVisible(DelButton);
DelButton.addListener(this);
addAndMakeVisible(ZButton);
ZButton.addListener(this);
addAndMakeVisible(XButton);
XButton.addListener(this);
addAndMakeVisible(CButton);
CButton.addListener(this);
addAndMakeVisible(VButton);
VButton.addListener(this);
addAndMakeVisible(BButton);
BButton.addListener(this);
addAndMakeVisible(NButton);
NButton.addListener(this);
addAndMakeVisible(MButton);
MButton.addListener(this);
addAndMakeVisible(NumButton);
NumButton.addListener(this);
FEditor.setColour(TextEditor::backgroundColourId, Colours::white);
FEditor.setColour(TextEditor::textColourId, Colours::black);
FEditor.setColour(TextEditor::outlineColourId, Colours::white);
FEditor.setMultiLine(true);
juce::File imageFileSaveDisabled = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;save_enabled.png&quot;);
juce::Image imageSaveDisabled = juce::ImageFileFormat::loadFrom(imageFileSaveDisabled);
if (imageSaveDisabled.isValid())
{
SaveButton.setDisabledImage(imageSaveDisabled);
}
juce::File imageFileSaveNormal = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;save_normal.png&quot;);
juce::File imageFileSaveOver = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;save_over.png&quot;);
juce::File imageFileSaveDown = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;save_down.png&quot;);
juce::Image imageSaveNormal = juce::ImageFileFormat::loadFrom(imageFileSaveNormal);
juce::Image imageSaveOver = juce::ImageFileFormat::loadFrom(imageFileSaveOver);
juce::Image imageSaveDown = juce::ImageFileFormat::loadFrom(imageFileSaveDown);
if (imageSaveNormal.isValid() &amp;&amp; imageSaveOver.isValid() &amp;&amp; imageSaveDown.isValid())
{
SaveButton.setImages(true, true, true, imageSaveNormal, 1.0f, Colours::transparentBlack, imageSaveOver,
1.0f, Colours::transparentBlack, imageSaveDown, 1.0f, Colours::transparentBlack);
}
juce::File imageFileLanguageNormal =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;language_normal.png&quot;);
juce::File imageFileLanguageOver =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;language_over.png&quot;);
juce::File imageFileLanguageDown =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;language_down.png&quot;);
juce::Image imageLanguageNormal = juce::ImageFileFormat::loadFrom(imageFileLanguageNormal);
juce::Image imageLanguageOver = juce::ImageFileFormat::loadFrom(imageFileLanguageOver);
juce::Image imageLanguageDown = juce::ImageFileFormat::loadFrom(imageFileLanguageDown);
if (imageLanguageNormal.isValid() &amp;&amp; imageLanguageOver.isValid() &amp;&amp; imageLanguageDown.isValid())
{
LanguageButton.setImages(true, true, true, imageLanguageNormal, 1.0f, Colours::transparentBlack,
imageLanguageOver, 1.0f, Colours::transparentBlack, imageLanguageDown, 1.0f, Colours::transparentBlack);
}
juce::File imageFileCapsNormal = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;caps_normal.png&quot;);
juce::File imageFileCapsOver = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;caps_over.png&quot;);
juce::File imageFileCapsDown = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;caps_down.png&quot;);
juce::Image imageCapsNormal = juce::ImageFileFormat::loadFrom(imageFileCapsNormal);
juce::Image imageCapsOver = juce::ImageFileFormat::loadFrom(imageFileCapsOver);
juce::Image imageCapsDown = juce::ImageFileFormat::loadFrom(imageFileCapsDown);
if (imageCapsNormal.isValid() &amp;&amp; imageCapsOver.isValid() &amp;&amp; imageCapsDown.isValid())
{
CapsButton.setImages(true, true, true, imageCapsNormal, 1.0f, Colours::transparentBlack, imageCapsOver,
1.0f, Colours::transparentBlack, imageCapsDown, 1.0f, Colours::transparentBlack);
}
juce::File imageFileEnterNormal = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;enter_normal.png&quot;);
juce::File imageFileEnterOver = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;enter_over.png&quot;);
juce::File imageFileEnterDown = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;enter_down.png&quot;);
juce::Image imageEnterNormal = juce::ImageFileFormat::loadFrom(imageFileEnterNormal);
juce::Image imageEnterOver = juce::ImageFileFormat::loadFrom(imageFileEnterOver);
juce::Image imageEnterDown = juce::ImageFileFormat::loadFrom(imageFileEnterDown);
if (imageEnterNormal.isValid() &amp;&amp; imageEnterOver.isValid() &amp;&amp; imageEnterDown.isValid())
{
EnterButton.setImages(true, true, true, imageEnterNormal, 1.0f, Colours::transparentBlack, imageEnterOver,
1.0f, Colours::transparentBlack, imageEnterDown, 1.0f, Colours::transparentBlack);
}
juce::File imageFileDelNormal = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;del_normal.png&quot;);
juce::File imageFileDelOver = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;del_over.png&quot;);
juce::File imageFileDelDown = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;del_down.png&quot;);
juce::Image imageDelNormal = juce::ImageFileFormat::loadFrom(imageFileDelNormal);
juce::Image imageDelOver = juce::ImageFileFormat::loadFrom(imageFileDelOver);
juce::Image imageDelDown = juce::ImageFileFormat::loadFrom(imageFileDelDown);
if (imageDelNormal.isValid() &amp;&amp; imageDelOver.isValid() &amp;&amp; imageDelDown.isValid())
{
DelButton.setImages(true, true, true, imageDelNormal, 1.0f, Colours::transparentBlack, imageDelOver, 1.0f,
Colours::transparentBlack, imageDelDown, 1.0f, Colours::transparentBlack);
}
};
MainComponent::~MainComponent(void)
{}
void MainComponent::paint(Graphics&amp; g)
{
g.fillAll(juce::Colour(0xFFFEF7FF));
}
void MainComponent::resized(void)
{
int gap = 15;
int gapX = 10;
int buttonHeight = getHeight() * 0.147;
int buttonWidth = getWidth() * 0.066;
QButton.setBounds(gap + 1 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
WButton.setBounds(gap + 2 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
EButton.setBounds(gap + 3 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
RButton.setBounds(gap + 4 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
TButton.setBounds(gap + 5 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
YButton.setBounds(gap + 6 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
UButton.setBounds(gap + 7 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
IButton.setBounds(gap + 8 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth, buttonHeight);
OButton.setBounds(gap + 9 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
PButton.setBounds(gap + 10 * (buttonWidth + gapX), gap + 1 * (buttonHeight + gap), buttonWidth,
buttonHeight);
FEditor.setBounds(gap, gap + 0 * (buttonHeight + gap), getWidth() * 0.866, buttonHeight);
SaveButton.setBounds(gap + 1 * (getWidth() * 0.866 + gapX), gap + 0 * (buttonHeight + gap), buttonWidth,
buttonHeight);
LanguageButton.setBounds(gap + 1 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
AButton.setBounds(gap + 2 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
SButton.setBounds(gap + 3 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
DButton.setBounds(gap + 4 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
FButton.setBounds(gap + 5 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
GButton.setBounds(gap + 6 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
HButton.setBounds(gap + 7 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
JButton.setBounds(gap + 8 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth, buttonHeight);
KButton.setBounds(gap + 9 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
LButton.setBounds(gap + 10 * (buttonWidth + gapX), gap + 2 * (buttonHeight + gap), buttonWidth,
buttonHeight);
CapsButton.setBounds(gap + 1 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), getWidth() * 0.1066,
buttonHeight);
ZButton.setBounds(gap + 2.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
XButton.setBounds(gap + 3.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
CButton.setBounds(gap + 4.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
VButton.setBounds(gap + 5.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
BButton.setBounds(gap + 6.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
NButton.setBounds(gap + 7.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
MButton.setBounds(gap + 8.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), buttonWidth,
buttonHeight);
DelButton.setBounds(gap + 9.5 * (buttonWidth + gapX), gap + 3 * (buttonHeight + gap), getWidth() * 0.1066,
buttonHeight);
NumButton.setBounds(gap, gap + 4 * (buttonHeight + gap), getWidth() * 0.1066, buttonHeight);
CommaButton.setBounds(gap + 1 * (getWidth() * 0.1066 + gapX), gap + 4 * (buttonHeight + gap), buttonWidth,
buttonHeight);
SpaceButton.setBounds(gap + 1 * (getWidth() * 0.1866 + gapX), gap + 4 * (buttonHeight + gap), getWidth() *
0.466, buttonHeight);
PointButton.setBounds(gap + 1 * (getWidth() * 0.6666 + gapX), gap + 4 * (buttonHeight + gap), buttonWidth,
buttonHeight);
EnterButton.setBounds(gap + 1 * (getWidth() * 0.7666), gap + 4 * (buttonHeight + gap), getWidth() * 0.18,
buttonHeight);
}
void MainComponent::textEditorTextChanged(TextEditor&amp; editor)
{
if (&amp;editor == &amp;FEditor)
{
juce::String currentText = FEditor.getText();
SaveButton.setEnabled(!currentText.isEmpty());
}
}
void MainComponent::updateButtonTexts()
{
if (isCapsLock)
{
QButton.setButtonText(&quot;Q&quot;);
WButton.setButtonText(&quot;W&quot;);
EButton.setButtonText(&quot;E&quot;);
RButton.setButtonText(&quot;R&quot;);
TButton.setButtonText(&quot;T&quot;);
YButton.setButtonText(&quot;Y&quot;);
UButton.setButtonText(&quot;U&quot;);
IButton.setButtonText(&quot;I&quot;);
OButton.setButtonText(&quot;O&quot;);
PButton.setButtonText(&quot;P&quot;);
AButton.setButtonText(&quot;A&quot;);
SButton.setButtonText(&quot;S&quot;);
DButton.setButtonText(&quot;D&quot;);
FButton.setButtonText(&quot;F&quot;);
GButton.setButtonText(&quot;G&quot;);
HButton.setButtonText(&quot;H&quot;);
JButton.setButtonText(&quot;J&quot;);
KButton.setButtonText(&quot;K&quot;);
LButton.setButtonText(&quot;L&quot;);
ZButton.setButtonText(&quot;Z&quot;);
XButton.setButtonText(&quot;X&quot;);
CButton.setButtonText(&quot;C&quot;);
VButton.setButtonText(&quot;V&quot;);
BButton.setButtonText(&quot;B&quot;);
NButton.setButtonText(&quot;N&quot;);
MButton.setButtonText(&quot;M&quot;);
}
else
{
QButton.setButtonText(&quot;q&quot;);
WButton.setButtonText(&quot;w&quot;);
EButton.setButtonText(&quot;e&quot;);
RButton.setButtonText(&quot;r&quot;);
TButton.setButtonText(&quot;t&quot;);
YButton.setButtonText(&quot;y&quot;);
UButton.setButtonText(&quot;u&quot;);
IButton.setButtonText(&quot;i&quot;);
OButton.setButtonText(&quot;o&quot;);
PButton.setButtonText(&quot;p&quot;);
AButton.setButtonText(&quot;a&quot;);
SButton.setButtonText(&quot;s&quot;);
DButton.setButtonText(&quot;d&quot;);
FButton.setButtonText(&quot;f&quot;);
GButton.setButtonText(&quot;g&quot;);
HButton.setButtonText(&quot;h&quot;);
JButton.setButtonText(&quot;j&quot;);
KButton.setButtonText(&quot;k&quot;);
LButton.setButtonText(&quot;l&quot;);
ZButton.setButtonText(&quot;z&quot;);
XButton.setButtonText(&quot;x&quot;);
CButton.setButtonText(&quot;c&quot;);
VButton.setButtonText(&quot;v&quot;);
BButton.setButtonText(&quot;b&quot;);
NButton.setButtonText(&quot;n&quot;);
MButton.setButtonText(&quot;m&quot;);
}
}
void MainComponent::buttonClicked(Button* button)
{
juce::String valueEditor = FEditor.getText();
if (button-&gt;getButtonText() == &quot;caps&quot;)
{
isCapsLock = !isCapsLock;
CapsButton.setToggleState(isCapsLock, NotificationType::dontSendNotification);
updateButtonTexts();
return;
}
if (button-&gt;getButtonText() == &quot;q&quot; || button-&gt;getButtonText() == &quot;Q&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;w&quot; || button-&gt;getButtonText() == &quot;W&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;e&quot; || button-&gt;getButtonText() == &quot;E&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;r&quot; || button-&gt;getButtonText() == &quot;R&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;t&quot; || button-&gt;getButtonText() == &quot;T&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;y&quot; || button-&gt;getButtonText() == &quot;Y&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;u&quot; || button-&gt;getButtonText() == &quot;U&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;i&quot; || button-&gt;getButtonText() == &quot;I&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;o&quot; || button-&gt;getButtonText() == &quot;O&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;p&quot; || button-&gt;getButtonText() == &quot;P&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;a&quot; || button-&gt;getButtonText() == &quot;A&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;s&quot; || button-&gt;getButtonText() == &quot;S&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;d&quot; || button-&gt;getButtonText() == &quot;D&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;f&quot; || button-&gt;getButtonText() == &quot;F&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;g&quot; || button-&gt;getButtonText() == &quot;G&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;h&quot; || button-&gt;getButtonText() == &quot;H&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;j&quot; || button-&gt;getButtonText() == &quot;J&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;k&quot; || button-&gt;getButtonText() == &quot;K&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;l&quot; || button-&gt;getButtonText() == &quot;L&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;z&quot; || button-&gt;getButtonText() == &quot;Z&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;x&quot; || button-&gt;getButtonText() == &quot;X&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;c&quot; || button-&gt;getButtonText() == &quot;C&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;v&quot; || button-&gt;getButtonText() == &quot;V&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;b&quot; || button-&gt;getButtonText() == &quot;B&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;n&quot; || button-&gt;getButtonText() == &quot;N&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;m&quot; || button-&gt;getButtonText() == &quot;M&quot;) {
FEditor.setText(valueEditor + button-&gt;getButtonText());
}
if (button-&gt;getButtonText() == &quot;enter&quot;) {
FEditor.setText(valueEditor + &quot;\n&quot;);
}
if (button-&gt;getButtonText() == &quot;del&quot;)
{
int caretPosition = FEditor.getCaretPosition();
if (FEditor.getText().isNotEmpty() &amp;&amp; caretPosition &gt; 0)
{
String currentText = FEditor.getText();
String newText = currentText.substring(0, caretPosition - 1)
+ currentText.substring(caretPosition);
FEditor.setText(newText);
FEditor.setCaretPosition(caretPosition - 1);
}
}
if (button-&gt;getButtonText() == &quot;save&quot;) {
File pathSaveFile = juce::File::getCurrentWorkingDirectory().getChildFile(&quot;saveViKey.txt&quot;);
if (pathSaveFile.exists())
{
pathSaveFile.replaceWithText(FEditor.getText());
}
else
{
pathSaveFile.create();
pathSaveFile.appendText(FEditor.getText());
}
savedText = FEditor.getText();
isTextSaved = true;
SaveButton.setEnabled(false);
return;
}
if (button-&gt;getButtonText() == &quot;.&quot;) {
FEditor.setText(valueEditor + &quot;.&quot;);
}
if (button-&gt;getButtonText() == &quot;,&quot;) {
FEditor.setText(valueEditor + &quot;,&quot;);
}
}
MyButton::MyButton(String name)
: TextButton(name)
{}
MyButton::~MyButton() {}
void MyButton::paint (Graphics&amp; g)
{
juce::Colour LightLilac = juce::Colour(0xFFE8DEF8);
juce::Colour Lilac = juce::Colour(0x506750A4);
juce::Colour DarkLilac = juce::Colour(0xFF6750A4);
juce::Colour DarkGrey = juce::Colour(0xFF49454F);
juce::Colour ColdGrey = juce::Colour(0x7049454F);
juce::Colour Grey = juce::Colour(0x70E6E0E9);
juce::Colour LightGrey = juce::Colour(0xFFE6E0E9);
//серые кнопки
if ((getButtonText() == &quot;.&quot;)|| (getButtonText() == &quot;,&quot;)) {
g.setColour(LightGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.setColour(DarkGrey);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
if (isMouseOver()) {
g.setColour(ColdGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.setColour(LightGrey);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
if (isMouseButtonDown()) {
g.setColour(DarkGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.setColour(LightGrey);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
}
// фиолетовые кнопки
else {
g.setColour(LightLilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
if (getButtonText() == &quot;?123&quot;) {
g.setColour(DarkLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.2, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
else {
g.setColour(DarkLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
if (isMouseOver()) {
g.setColour(Lilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
if (getButtonText() == &quot;?123&quot;) {
g.setColour(LightLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.2, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
else {
g.setColour(LightLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
}
if (isMouseButtonDown()) {
g.setColour(DarkLilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
if (getButtonText() == &quot;?123&quot;) {
g.setColour(LightLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.2, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
else {
g.setColour(LightLilac);
g.setFont(juce::Font(&quot;Roboto&quot;, getWidth() * 0.45, Font::plain));
g.drawText(getButtonText(), 0, 0, getWidth(), getHeight(), Justification::centred);
}
}
}
}
MyImageButton::MyImageButton(String name)
: ImageButton(name)
{}
MyImageButton::~MyImageButton() {}
void MyImageButton::paintButton(Graphics&amp; g, bool isMouseOverButton, bool isButtonDown)
{
juce::Colour LightLilac = juce::Colour(0xFFE8DEF8);
juce::Colour Lilac = juce::Colour(0x706750A4);
juce::Colour DarkLilac = juce::Colour(0xFF6750A4);
juce::Colour DarkGrey = juce::Colour(0xFF49454F);
juce::Colour ColdGrey = juce::Colour(0x7049454F);
juce::Colour LightGrey = juce::Colour(0xFFE6E0E9);
//недоступная кнопка save
if (!isEnabled())
{
g.setColour(juce::Colour(0x60E6E0E9));
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
if (disabledImage.isValid())
{
g.drawImageWithin(disabledImage, getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
return;
}
juce::File imageFileCapsLockNormal =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;capslock_normal.png&quot;);
juce::File imageFileCapsLockOver =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;capslock_over.png&quot;);
juce::File imageFileCapsLockDown =
juce::File::getCurrentWorkingDirectory().getChildFile(&quot;capslock_down.png&quot;);
juce::Image imageCapsLockNormal = juce::ImageFileFormat::loadFrom(imageFileCapsLockNormal);
juce::Image imageCapsLockOver = juce::ImageFileFormat::loadFrom(imageFileCapsLockOver);
juce::Image imageCapsLockDown = juce::ImageFileFormat::loadFrom(imageFileCapsLockDown);
// CapsLock
if (getToggleState())
{
if (getButtonText() == &quot;caps&quot;)
{
if (isButtonDown) {
g.setColour(DarkGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(imageCapsLockDown, getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else if (isMouseOverButton)
{
g.setColour(ColdGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(imageCapsLockOver, getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else {
g.setColour(LightGrey);

38
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(imageCapsLockNormal, getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() /
2, RectanglePlacement::centred);
}
return;
}
}
//фиолетовые кнопки
if (getButtonText() == &quot;language&quot; || getButtonText() == &quot;enter&quot; || getButtonText() == &quot;save&quot;)
{
if (isButtonDown) {
g.setColour(LightLilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getDownImage(), getWidth()/4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else if (isMouseOverButton)
{
g.setColour(Lilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getOverImage(), getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else {
g.setColour(DarkLilac);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getNormalImage(), getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
}
//серые кнопки
else
{
if (isButtonDown) {
g.setColour(DarkGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getDownImage(), getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else if (isMouseOverButton)
{
g.setColour(ColdGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getOverImage(), getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
else {
g.setColour(LightGrey);
g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 6);
g.drawImageWithin(getNormalImage(), getWidth() / 4, getHeight() / 4, getWidth() / 2, getHeight() / 2,
RectanglePlacement::centred);
}
}
}
