#include &quot;../JuceLibraryCode/JuceHeader.h&quot;
#include &quot;../Include/MainFrame.h&quot;
#include &quot;../Include/Application.h&quot;
//
MainFrame::MainFrame(const String&amp; name)
: DocumentWindow(name, Desktop::getInstance().getDefaultLookAndFeel()
.findColour(ResizableWindow::backgroundColourId),
DocumentWindow::allButtons)
{
setUsingNativeTitleBar(true);
setResizable(true, false);
setResizeLimits(750, 340, 10000, 10000);
setTopLeftPosition(400, 400);
//
setContentOwned (new MainComponent(), false);
setVisible(true);
}
