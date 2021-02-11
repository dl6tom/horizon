#pragma once
#include "common/common.hpp"
#include <gtkmm.h>

namespace horizon {

class MainWindow : public Gtk::ApplicationWindow {
public:
    MainWindow(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder> &x);
    static MainWindow *create();
    class CanvasGL *canvas = nullptr;
    Gtk::Label *tool_hint_label = nullptr;
    Gtk::Label *cursor_label = nullptr;
    Gtk::Box *left_panel = nullptr;
    Gtk::Box *grid_box_square = nullptr;
    Gtk::Box *grid_box_rect = nullptr;
    Gtk::Label *grid_mul_label = nullptr;
    Gtk::Label *selection_label = nullptr;
    Gtk::Viewport *property_viewport = nullptr;
    Gtk::ScrolledWindow *property_scrolled_window = nullptr;
    Gtk::Revealer *property_throttled_revealer = nullptr;
    Gtk::HeaderBar *header = nullptr;
    Glib::RefPtr<Gtk::Builder> builder;

    Gtk::Button *pool_reload_button = nullptr;

    Gtk::SearchEntry *search_entry = nullptr;
    Gtk::Button *search_previous_button = nullptr;
    Gtk::Button *search_next_button = nullptr;
    Gtk::Label *search_status_label = nullptr;
    Gtk::Revealer *search_revealer = nullptr;
    Gtk::CheckButton *search_exact_cb = nullptr;
    Gtk::Expander *search_expander = nullptr;
    Gtk::Box *search_types_box = nullptr;
    Gtk::Label *selection_mode_label = nullptr;
    Gtk::MenuButton *view_options_button = nullptr;

    Gtk::Revealer *action_bar_revealer = nullptr;
    Gtk::Box *action_bar_box = nullptr;
    void set_use_action_bar(bool u);

    Gtk::RadioButton *grid_square_button = nullptr;
    Gtk::RadioButton *grid_rect_button = nullptr;
    Gtk::Grid *grid_grid = nullptr;
    Gtk::Button *grid_reset_origin_button = nullptr;


    Glib::SignalProxy<bool, const Glib::ustring &> signal_activate_hud_link()
    {
        return hud_label->signal_activate_link();
    }


    void tool_bar_set_visible(bool v);
    void tool_bar_set_tool_name(const std::string &s);
    void tool_bar_set_tool_tip(const std::string &s);
    void tool_bar_flash(const std::string &s);
    void tool_bar_set_use_actions(bool use_actions);
    void tool_bar_clear_actions();
    void tool_bar_append_action(Gtk::Widget &w);

    void hud_update(const std::string &s);
    void hud_hide();

    void show_nonmodal(const std::string &la, const std::string &button, std::function<void(void)> fn,
                       const std::string &la2 = "");

    void set_view_hints_label(const std::vector<std::string> &s);

    void disable_grid_options();

    void set_version_info(const std::string &s);

    // virtual ~MainWindow();
private:
    Gtk::Revealer *tool_bar = nullptr;
    Gtk::Label *tool_bar_name_label = nullptr;
    Gtk::Label *tool_bar_tip_label = nullptr;
    Gtk::Label *tool_bar_flash_label = nullptr;
    Gtk::Stack *tool_bar_stack = nullptr;
    Gtk::Label *tool_bar_action_tip_label = nullptr;
    Gtk::Box *tool_bar_actions_box = nullptr;
    sigc::connection tip_timeout_connection;
    bool tool_bar_queue_close = false;

    Gtk::Revealer *hud = nullptr;
    Gtk::Label *hud_label = nullptr;

    sigc::connection hud_timeout_connection;
    bool hud_queue_close = false;

    Gtk::Button *nonmodal_close_button = nullptr;
    Gtk::Button *nonmodal_button = nullptr;
    Gtk::Revealer *nonmodal_rev = nullptr;
    Gtk::Label *nonmodal_label = nullptr;
    Gtk::Label *nonmodal_label2 = nullptr;
    std::function<void(void)> nonmodal_fn;

    Gtk::Label *view_hints_label = nullptr;

    Gtk::ToggleButton *grid_options_button = nullptr;
    Gtk::Revealer *grid_options_revealer = nullptr;

    Gtk::Stack *grid_box_stack = nullptr;

    Gtk::InfoBar *version_info_bar = nullptr;
    Gtk::Label *version_label = nullptr;

    bool tool_bar_use_actions = false;
};
} // namespace horizon
