# frozen_string_literal: false

class CustomSidebarPDFConverter < (Asciidoctor::Converter.for 'pdf')
  register_for 'pdf'

  def convert_sidebar node
    # warn 'Converting sidebar node...'
    # warn node.caption, node.title
    if(node.caption)
      node.title = %(【#{node.caption}】 #{node.title})
    else
      node.title = %(【#{node.title}】)
    end
    super
  end

end
