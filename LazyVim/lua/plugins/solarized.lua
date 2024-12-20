return {
  "maxmx03/solarized.nvim",
  lazy = false,
  priority = 1000,
  ---@type solarized.config
  opts = {
    transparent = {
      enabled = true,
      pmenu = true,
      normal = true,
      normalfloat = true,
      neotree = true,
      nvimtree = true,
      whichkey = true,
      telescope = true,
      lazy = true,
    },
    palette = "solarized", -- solarized (default) | selenized
    variant = "winter", -- "spring" | "summer" | "autumn" | "winter" (default)
    error_lens = {
      text = false,
      symbol = false,
    },
    styles = {
      enabled = true,
      types = { italic = true }, -- Add italics for types
      functions = { bold = false }, -- Add bold for functions
      parameters = {},
      comments = { italic = true }, -- Add italics for comments
      strings = {},
      keywords = { bold = false }, -- Add bold for keywords
      variables = {},
      constants = {},
    },
    plugins = {
      treesitter = true,
      lspconfig = true,
      navic = true,
      cmp = true,
      indentblankline = true,
      neotree = true,
      nvimtree = true,
      whichkey = true,
      dashboard = true,
      gitsigns = true,
      telescope = true,
      noice = true,
      hop = true,
      ministatusline = true,
      minitabline = true,
      ministarter = true,
      minicursorword = true,
      notify = true,
      rainbowdelimiters = true,
      bufferline = true,
      lazy = true,
      rendermarkdown = true,
      ale = true,
      coc = true,
      leap = true,
      alpha = true,
      yanky = true,
      gitgutter = true,
    },
  },
  config = function(_, opts)
    vim.o.termguicolors = true
    vim.o.background = "light"
    require("solarized").setup(opts)
    vim.cmd.colorscheme("solarized")
  end,
}
