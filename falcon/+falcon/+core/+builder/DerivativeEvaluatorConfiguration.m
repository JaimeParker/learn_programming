classdef (Abstract) DerivativeEvaluatorConfiguration
    % Base class for derivative evaluator configuration

    % -------------------------------------------------------------------------
    %                                FALCON.m
    % Copyright (c) 2014-2019 Institute of Flight System Dynamics, TUM, Munich
    % Matthias Bittner, Matthias Rieck, Maximilian Richter,
    % Benedikt Grueter, Johannes Diepolder, Florian Schwaiger,
    % Patrick Piprek, and Florian Holzapfel
    % Downloading, using, copying, or modifying FALCON.m code constitutes an
    % agreement to ALL of the terms of the FALCON.m EULA.
    % -------------------------------------------------------------------------

    properties
        % Enable multi-threaded model evaluation
        MultiThreading
        % Level of detail for output during the build process
        PrintLevel
        % Model output directory
        OutputDirectory
        % Builder-specific code generation diretory name
        CodeDirectoryName
    end

    methods
        function evaluationProvider = createEvaluationProvider(self)
        % Create the evaluation provider object corresponding to the
        % configuration.
        end

        function name = string(self)
        % Return the code generation directory name.
        %  
        % <Description>
        % For backward-compatibility.
        end

        function name = char(self)
        % Return the code generation directory name.
        %  
        % <Description>
        % For backward-compatibility.
        end

        function self = checkValid(self)
        % Check configuration consistency, fail if invalid
        %  
        % <Syntax>
        % config = config.checkValid()
        %  
        % <Description>
        % Raise an exception unless isValid().
        end

        function flag = isValid(self)
        % Check configuration consistency
        %  
        % <Syntax>
        % flag = config.isValid()
        %  
        % <Description>
        % This runs basic consistency checks.
        %  
        % <Outputs>
        % > flag: logical, true if valid
        end

        function self = DerivativeEvaluatorConfiguration()
        % Base class for derivative evaluator configuration
        end

    end

end