
classdef LElseNode < LNode
    
    methods
        function self = LElseNode()
            self@LNode('');
        end
        
        function str = render(~, ~)
            str = '';
        end
        
        function process_fragment(self, fragment)
            % stub
        end
    end
end