#ifndef __vtkKWGuideWidget_h
#define __vtkKWGuideWidget_h

#include "vtkIGTPlanning.h"
#include "vtkKWTopLevel.h"

class vtkKWFrame;
class vtkKWPushButton;
class vtkKWLabel;

class VTK_IGT_EXPORT vtkKWGuideWidget : public vtkKWTopLevel
{
public:
  static vtkKWGuideWidget* New();
  vtkTypeRevisionMacro(vtkKWGuideWidget, vtkKWTopLevel);
  void PrintSelf(ostream& os, vtkIndent indent);
  
  // Description:
  // Update the "enable" state of the object and its internal parts.
  // Depending on different Ivars (this->Enabled, the application's 
  // Limited Edition Mode, etc.), the "enable" state of the object is updated
  // and propagated to its internal parts/subwidgets. This will, for example,
  // enable/disable parts of the widget UI, enable/disable the visibility
  // of 3D widgets, etc.
  virtual void UpdateEnableState();

  // Description:
  // Callbacks. Internal, do not use.
  virtual void EditorButtonCallback();
  virtual void HomeButtonCallback();

  virtual void Display(int x, int y);

protected:
  vtkKWGuideWidget();
  ~vtkKWGuideWidget();

  // Description:
  // Create the widget.
  virtual void CreateWidget();
  
  vtkKWFrame      *ButtonFrame;
  vtkKWPushButton *EditorButton;
  vtkKWPushButton *HomeButton;
  

private:
  vtkKWGuideWidget(const vtkKWGuideWidget&); // Not implemented
  void operator=(const vtkKWGuideWidget&); // Not implemented
};

#endif

