// -*- C++ -*-
//
// generated by wxGlade 01d8bb798de7+ on Wed Oct 16 14:55:13 2013
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include <wx/wx.h>
#include "WMain_wxg.h"

// begin wxGlade: ::extracode
// end wxGlade


WMain_wxg::WMain_wxg(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: WMain_wxg::WMain_wxg
    splitter_0 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3DBORDER|wxSP_BORDER|wxSP_LIVE_UPDATE);
    splitter_0_pane_2 = new wxPanel(splitter_0, wxID_ANY);
    panelQuickSortPivot = new wxPanel(splitter_0_pane_2, wxID_ANY);
    sizer_3_staticbox = new wxStaticBox(splitter_0_pane_2, wxID_ANY, _("Animation Controls"));
    sizerInputAlgorithm_staticbox = new wxStaticBox(splitter_0_pane_2, wxID_ANY, _("Input and Algorithm"));
    splitter_0_pane_1 = new wxPanel(splitter_0, wxID_ANY);
    sortview = new WSortView(splitter_0_pane_1, wxID_ANY, this);
    runButton = new wxToggleButton(splitter_0_pane_2, ID_RUN_BUTTON, _("&Run"));
    resetButton = new wxButton(splitter_0_pane_2, ID_RESET_BUTTON, _("R&eset"));
    stepButton = new wxButton(splitter_0_pane_2, ID_STEP_BUTTON, _("&Step"));
    soundButton = new wxToggleButton(splitter_0_pane_2, ID_SOUND_BUTTON, _("S&ound"));
    aboutButton = new wxButton(splitter_0_pane_2, wxID_ABOUT, _("&About"));
    randomButton = new wxButton(splitter_0_pane_2, ID_RANDOM_BUTTON, _("Ran&dom"));
    recordButton = new wxToggleButton(splitter_0_pane_2, ID_RECORD_BUTTON, _("Record"));
    speedSlider = new wxSlider(splitter_0_pane_2, ID_SPEED_SLIDER, 0, 0, 2000);
    labelDelayValue = new wxStaticText(splitter_0_pane_2, wxID_ANY, wxEmptyString);
    soundSustainSlider = new wxSlider(splitter_0_pane_2, ID_SOUND_SUSTAIN_SLIDER, 0, 0, 2000);
    labelSoundSustainValue = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("50.0"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE);
    labelComparisonsValue = new wxStaticText(splitter_0_pane_2, wxID_ANY, wxEmptyString);
    labelAccessCount = new wxStaticText(splitter_0_pane_2, wxID_ANY, wxEmptyString);
    const wxString *inputTypeChoice_choices = NULL;
    inputTypeChoice = new wxChoice(splitter_0_pane_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, inputTypeChoice_choices, 0);
    arraySizeSlider = new wxSlider(splitter_0_pane_2, ID_ARRAY_SIZE_SLIDER, 0, 1, 2048);
    labelArraySizeValue = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("1024"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxST_NO_AUTORESIZE);
    const wxString *algoList_choices = NULL;
    algoList = new wxListBox(splitter_0_pane_2, ID_ALGO_LIST, wxDefaultPosition, wxDefaultSize, 0, algoList_choices, wxLB_SINGLE);
    pivotRuleLabel = new wxStaticText(panelQuickSortPivot, wxID_ANY, _("Pivot Rule: "));
    const wxString *pivotRuleChoice_choices = NULL;
    pivotRuleChoice = new wxChoice(panelQuickSortPivot, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, pivotRuleChoice_choices, 0);
    infoTextctrl = new wxTextCtrl(splitter_0_pane_2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY);

    set_properties();
    do_layout();
    // end wxGlade
}


void WMain_wxg::set_properties()
{
    // begin wxGlade: WMain_wxg::set_properties
    SetTitle(_("The Sound of Sorting - http://panthema.net/2013/sound-of-sorting"));
    sortview->SetMinSize(wxSize(640, 480));
    speedSlider->SetToolTip(_("Changes the animation speed by setting the delay for each array access."));
    soundSustainSlider->SetToolTip(_("Changes the duration of each access sound as a multiple of the delay."));
    panelQuickSortPivot->Hide();
    splitter_0->SetSashGravity(1.0);
    // end wxGlade
}


void WMain_wxg::do_layout()
{
    // begin wxGlade: WMain_wxg::do_layout
    wxBoxSizer* sizer_0 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxVERTICAL);
    sizerInputAlgorithm_staticbox->Lower();
    wxStaticBoxSizer* sizerInputAlgorithm = new wxStaticBoxSizer(sizerInputAlgorithm_staticbox, wxVERTICAL);
    wxBoxSizer* sizerQuickSortPivot = new wxBoxSizer(wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_1 = new wxFlexGridSizer(3, 2, 0, 0);
    wxBoxSizer* sizer_6 = new wxBoxSizer(wxHORIZONTAL);
    sizer_3_staticbox->Lower();
    wxStaticBoxSizer* sizer_3 = new wxStaticBoxSizer(sizer_3_staticbox, wxVERTICAL);
    wxBoxSizer* sizerAnimationControls = new wxBoxSizer(wxVERTICAL);
    wxFlexGridSizer* grid_sizer_3 = new wxFlexGridSizer(5, 2, 0, 0);
    wxBoxSizer* sizerSoundSustain = new wxBoxSizer(wxHORIZONTAL);
    wxGridSizer* grid_sizer_2 = new wxGridSizer(3, 2, 0, 0);
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxHORIZONTAL);
    sizer_1->Add(sortview, 1, wxEXPAND, 0);
    splitter_0_pane_1->SetSizer(sizer_1);
    grid_sizer_2->Add(runButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_2->Add(resetButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_2->Add(stepButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_2->Add(soundButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_2->Add(aboutButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_2->Add(randomButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    sizerAnimationControls->Add(grid_sizer_2, 0, wxEXPAND, 0);
    sizerAnimationControls->Add(recordButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    wxStaticText* labelSpeed = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Speed: "));
    grid_sizer_3->Add(labelSpeed, 0, wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_3->Add(speedSlider, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    wxStaticText* labelDelay = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Delay: "));
    grid_sizer_3->Add(labelDelay, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_3->Add(labelDelayValue, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 4);
    wxStaticText* labelSoundSustain = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Sound Sustain: "));
    grid_sizer_3->Add(labelSoundSustain, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    sizerSoundSustain->Add(soundSustainSlider, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    sizerSoundSustain->Add(labelSoundSustainValue, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL|wxFIXED_MINSIZE, 4);
    grid_sizer_3->Add(sizerSoundSustain, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    wxStaticText* labelComparisons = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Comparisons: "));
    grid_sizer_3->Add(labelComparisons, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_3->Add(labelComparisonsValue, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 4);
    wxStaticText* labelAccess = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Array Accesses: "));
    grid_sizer_3->Add(labelAccess, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_3->Add(labelAccessCount, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_3->AddGrowableCol(1);
    sizerAnimationControls->Add(grid_sizer_3, 1, wxEXPAND, 0);
    sizer_3->Add(sizerAnimationControls, 1, wxEXPAND, 0);
    sizer_2->Add(sizer_3, 0, wxALL|wxEXPAND, 4);
    wxStaticText* labelInputType = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Input Type: "));
    grid_sizer_1->Add(labelInputType, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    grid_sizer_1->Add(inputTypeChoice, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 4);
    wxStaticText* labelArraySize = new wxStaticText(splitter_0_pane_2, wxID_ANY, _("Array Size: "));
    grid_sizer_1->Add(labelArraySize, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    sizer_6->Add(arraySizeSlider, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    sizer_6->Add(labelArraySizeValue, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL|wxFIXED_MINSIZE, 4);
    grid_sizer_1->Add(sizer_6, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_1->AddGrowableCol(1);
    sizerInputAlgorithm->Add(grid_sizer_1, 0, wxEXPAND, 0);
    sizerInputAlgorithm->Add(algoList, 1, wxEXPAND, 0);
    sizerQuickSortPivot->Add(pivotRuleLabel, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    sizerQuickSortPivot->Add(pivotRuleChoice, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    panelQuickSortPivot->SetSizer(sizerQuickSortPivot);
    sizerInputAlgorithm->Add(panelQuickSortPivot, 0, wxEXPAND, 0);
    sizerInputAlgorithm->Add(infoTextctrl, 0, wxEXPAND, 0);
    sizer_2->Add(sizerInputAlgorithm, 1, wxALL|wxEXPAND, 4);
    splitter_0_pane_2->SetSizer(sizer_2);
    splitter_0->SplitVertically(splitter_0_pane_1, splitter_0_pane_2, 10);
    sizer_0->Add(splitter_0, 1, wxEXPAND, 0);
    SetSizer(sizer_0);
    sizer_0->Fit(this);
    sizer_0->SetSizeHints(this);
    Layout();
    Centre();
    // end wxGlade
}

