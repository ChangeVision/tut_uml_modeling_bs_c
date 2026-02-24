# frozen_string_literal: true

require 'asciidoctor/converter/html5'

module Asciidoctor
class CustomSidebarCaptionHtml5Converter < (Asciidoctor::Converter.for 'html5')
  register_for 'html5'

  register_for 'sidebar_caption_html5'

  def convert_sidebar(node)
    # warn 'Converting a sidebar node...'
    node.title = %(【#{node.caption}】 #{node.title})
    super
  end
end
end
