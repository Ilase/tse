#include <ftxui/dom/elements.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/component/component_base.hpp>
#include <ftxui/component/captured_mouse.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

int main(){
    auto screen = ScreenInteractive::FitComponent();
    auto render_space = Renderer( [&] {
            return vbox({
                text("hello niger") ,
                separator(),
                text(":3")
            }) | border;
        }
    );
    screen.Loop(render_space);
    return 0;
}