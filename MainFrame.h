#pragma once
//
#include &quot;../JuceLibraryCode/JuceHeader.h&quot;
#include &quot;../Include/MainComponent.h&quot;
//
class MainFrame : public DocumentWindow
{
public:
//
MainFrame(const String&amp; name);
//
void closeButtonPressed(void) override { JUCEApplication::getInstance()-&gt;systemRequestedQuit(); }
//
MainComponent&amp; getMainComponent(void) { return *dynamic_cast&lt;MainComponent*&gt;
(getContentComponent()); }
//
private:
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainFrame)
};
