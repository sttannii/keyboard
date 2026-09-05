#pragma once
//
#include &quot;../JuceLibraryCode/JuceHeader.h&quot;
#include &quot;../Include/MainFrame.h&quot;
//
class PracticeApplication : public JUCEApplication
{
public:
PracticeApplication(void) {}
~PracticeApplication(void) override {}
//
const String getApplicationName(void) override { return ProjectInfo::projectName; }
const String getApplicationVersion(void) override { return ProjectInfo::versionString; }
bool moreThanOneInstanceAllowed(void) override { return true; }
//
void initialise(const String&amp;) override
{
mainFrame.reset(new MainFrame(getApplicationName()));
}
//
void shutdown(void) override { mainFrame = nullptr; }
//
void systemRequestedQuit(void) override { quit(); }
void anotherInstanceStarted(const String&amp;) override {}
//
private:
std::unique_ptr&lt;MainFrame&gt; mainFrame;
};
//
START_JUCE_APPLICATION(PracticeApplication)
